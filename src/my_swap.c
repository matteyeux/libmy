/*
** ETNA PROJECT, 23-10-2018 by hauteb_m
** my_swap
** File description:
**      my swap
*/

#include <libmy.h>

void my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

