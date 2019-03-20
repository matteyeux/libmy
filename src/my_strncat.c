/*
** ETNA PROJECT, 25-10-2018 by hauteb_m
** my_strncat
** File description:
**      my_strncat
*/

#include <libmy.h>

char *my_strncat(char *dest, char *src, int n)
{
    int i = 0;
    int len_dest = my_strlen(dest);

    while (i < n && src[i] != '\0') {
        dest[len_dest + i] = src[i];
        i++;
    }
    dest[len_dest + i] = '\0';

    return (dest);
}
