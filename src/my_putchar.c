/*
** ETNA PROJECT, 22/10/2018 by hauteb_m
** my_put_char
** File description:
**      put char function
*/

#include <unistd.h>
#include <libmy.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
