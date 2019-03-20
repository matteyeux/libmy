/*
** ETNA PROJECT, 25-10-2018 by hauteb_m
** my_strcmp
** File description:
**      compare str
*/

#include <libmy.h>

int my_strcmp(char *s1, char *s2)
{
    int s1_len = my_strlen(s1);
    int s2_len = my_strlen(s2);
    int i = 0;

    int checker;

    if (s1_len > s2_len)
        checker = s1_len;
    else
        checker = s2_len;

    while (checker != 0) {
        if (s1[i] != s2[i]) {
            return (s1[i] - s2[i]);
        }
        checker--;
        i++;
    }

    return (0);

}
