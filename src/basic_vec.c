#include "artscii.h"

/*
Add color to the vector data structure and update
the frequencies of the colors seen so far as needed
*/
void add_color(Vector *vec, uint32_t color)
{
    bool flag = true;
    for (int i = 0; i < vec->curr; i++)
    {
        if (vec->colors[i].color == color)
        {
            flag = false;
            vec->colors[i].count++;
            if (vec->colors[vec->m_idx].count < vec->colors[i].count)
                vec->m_idx = i;
            break;
        }
    }

    if (flag)
    {
        vec->colors[(vec->curr)].color = color;
        vec->colors[(vec->curr)++].count = 1;
    }
}

/*
Return the most frequent color in the vector
*/
uint32_t get_dom_color(Vector *vec)
{
    return vec->colors[vec->m_idx].color;
}
