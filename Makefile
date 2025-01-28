WARNING = -Wall -Wshadow
ERROR = -Wvla -Werror
GCC = gcc -std=c11 -g $(WARNING) $(ERROR) -O3

SRCS = src/artscii.c src/basic_vec.c src/main.c
OUTPUT = show

$(OUTPUT): $(SRCS) 
	$(GCC) $(SRCS) -o $(OUTPUT)

leak: $(OUTPUT)
	valgrind ./show images/car.bmp

clean:
	rm -f $(OUTPUT) && clear