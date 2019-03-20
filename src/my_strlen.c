/*
** ETNA PROJECT, 24-10-2018 by hauteb_m
** my_strlen
** File description:
**      my strlen
*/

#include <libmy.h>

int my_strlen(char *str)
{
    int index = 0;
    while (str[index] != '\0') {
        index += 1;
    }
    return (index);
}
