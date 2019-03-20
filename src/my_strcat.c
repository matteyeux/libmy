/*
** ETNA PROJECT, 25-10-2018 by hauteb_m
** my_strcat
** File description:
**      project_description
*/
#include <libmy.h>

char *my_strcat(char *dest, char *src)
{
    /* point to end of dest str for appending */
    char *ptr = dest + my_strlen(dest);

    /* append  */
    while (*src != '\0') {
         *ptr++ = *src++;
    }

    /* end of str */
    *ptr = '\0';

    return (dest);
}
