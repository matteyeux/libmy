/*
** ETNA PROJECT, 25-10-2018 by hauteb_m
** my_strncmp
** File description:
**      compare str
*/

#include <libmy.h>

int my_strncmp(char *s1, char *s2, int n)
{
    while (n && *s1 && (*s1 == *s2)) {
        s1++;
        s2++;
        n--;
    }

    if (n == 0) {
        return (0);
    }

    return (*s1 - *s2);

}
