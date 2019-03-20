/*
** ETNA PROJECT, 24-10-2018 by hauteb_m
** my_put_str
** File description:
**      my put str
*/

#include <libmy.h>

void my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
