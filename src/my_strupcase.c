/*
** ETNA PROJECT, 24-10-2018 by hauteb_m
** my_strupercase
** File description:
**      upercase it
*/

char *my_strupcase(char *str)
{
    int i;
    while (str[i] != '\0') {
        if (str[i] > 96 && str[i] < 122)
            str[i] = str[i] - 32;
        i++;
    }
    return (str);
}
