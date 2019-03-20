/*
** ETNA PROJECT, 29/10/2018 by hauteb_m
** my_strdup
** File description:
**      my strdup
*/

#include <stdlib.h>
#include <libmy.h>

char *my_strdup(char *str)
{
    char *ptr;
    char *str_dup;
    int i = 0;

    while (str[i])
        i++;

    str_dup = malloc(i + 1);

    if (str_dup == NULL)
        return (NULL);

    ptr = str_dup;

    while (*str) {
        *ptr++ = *str++;
    }

    *ptr = '\0';
    return (str_dup);
}

