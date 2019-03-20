/*
** ETNA PROJECT, 26-10-2018 by hauteb_m
** project_name
** File description:
**      project_description
*/

#include <libmy.h>

int my_getnbr(char *str)
{
    int i = 0;
    int n = 0;
    int cnt = 0;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            cnt++;
        i++;
    }

    while (str[i] != '\0') {
        if ((str[i] < '0' || str[i] > '9'))
            break;
      n = n * 10 + str[i] - '0';
      i++;
    }

    if (cnt % 2 != 0)
        n *= -1;
    return (n);
}
