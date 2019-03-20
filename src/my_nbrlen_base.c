/*
** ETNA PROJECT, 26/10/2018 by hauteb_m
** my_nbrlen_base
** File description:
**      base
*/

int my_nbrlen_base(int n, int base)
{
    int digit = 0;
    int i = 0;
    int checker = 0;

    if (n <= 0)
        checker = 1;

    while (n != 0) {
        digit = (n % base);
        n /= base;
        i++;
    }

    digit += 1;

    if (checker)
         i += 1;
    return (i);
}
