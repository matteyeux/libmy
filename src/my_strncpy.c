/*
** ETNA PROJECT, 25-10-2018 by hauteb_m
** project_name
** File description:
**      project_description
*/

#include <libmy.h>

char *my_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];

    for ( ; i < n; i++)
        dest[i] = '\0';

    return (dest);
}
