WARNING = -Wall -Wshadow
ERROR = -Wvla -Werror
GCC = gcc -std=c11 -g $(WARNING) $(ERROR) -O3

SRCS = artscii.c basic_vec.c
OUTPUT = show

$(OUTPUT): $(SRCS) 
	$(GCC) $(SRCS) -o $(OUTPUT)

leak: $(OUTPUT)
	valgrind ./show images/purduetrain.bmp

clean:
	rm -f $(OUTPUT) && clear