/*
** ETNA PROJECT, 26-10-2018 by hauteb_m
** my_nbrlen
** File description:
**      my_nbrlen
*/

int my_nbrlen(int n)
{
    int i = 0;

    if (n <= 0)
        i += 1;

    while (n != 0) {
        n /=  10;
        i++;
    }

    return (i);
}

