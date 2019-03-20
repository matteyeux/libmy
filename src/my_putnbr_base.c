/*
** ETNA PROJECT, 27/10/2018 by hauteb_m
** my_putnbr_base
** File description:
**      test
*/

#include <libmy.h>

void my_putnbr_base(int n, char *base)
{
    int len = my_strlen(base);
    int i = 0;
    int cnt = 0;
    int digit = 0;
    int m = n;

    if (n < 0) {
        n *= -1;
        my_putchar('-');
    }

    if (n == 0)
        my_putchar(n + '0');

    while (m != 0)
    {
        m /= len;
        cnt++;
    }
    char tab[cnt];
    tab[cnt] = '\0';

    for (i = 0; i < cnt ; i++) {
        digit = (n % len);
        n /= len;
        tab[cnt - i - 1] = base[digit];

    }
    my_putstr(tab);
}


