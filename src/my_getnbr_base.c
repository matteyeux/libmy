/*
** ETNA PROJECT, 31/10/2018 by hauteb_m
** project_name
** File description:
**      project_description
*/

#include <libmy.h>

int my_getnbr_base(char *str, char *base)
{

    int i;
    int j = 0;
    int n2ret = 0;
    int m = 1;
    int checker = 0;
    int base_t;

    base_t = my_strlen(base);

    if (str[0] == '-') {
        checker = 1;
        str = &str[1];
    }

    i = my_strlen(str) - 1;

    while (i >= 0) {
        j = 0;
        while (str[i] != base[j]) {
            j++;
        }
        n2ret = n2ret + j * m;
        m = m * base_t;
        i--;
    }

    if (checker)
        n2ret *= -1;

    return (n2ret);
}
