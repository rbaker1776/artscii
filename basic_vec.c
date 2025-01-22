#include "artscii.h"

void add_color(Vector *vec, Color color)
{
    bool flag = true;
    for (int i = 0; i < vec->curr; i++)
    {
        if (vec->colors[i].color.red == color.red &&
            vec->colors[i].color.green == color.green &&
            vec->colors[i].color.blue == color.blue)
        {
            flag = false;
            vec->colors[i].count++;
            if (vec->m_idx != i)
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

Color get_dom_color(Vector *vec)
{
    return vec->colors[vec->m_idx].color;
}