/*
** ETNA PROJECT, 25-10-2018 by hauteb_m
** my_strcpy
** File description:
**      my strcpy
*/

#include <unistd.h>

char *my_strcpy(char *dest, char *src)
{
    char *ptr;

    if (dest == NULL)
        return (NULL);

    ptr = dest;

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    /*  once we hit '\0' of src
        we are out of the loop
        then add '\0' to dest
    */
    *dest = '\0';

    return (ptr);
}
