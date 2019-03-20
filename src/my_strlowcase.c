/*
** ETNA PROJECT, 24-10-2018 by hauteb_m
** my_strlowcase
** File description:
**      lowercase it
*/
char *my_strlowcase(char *str)
{
    int i;
    while (str[i] != '\0') {
        if (str[i] > 64 && str[i] < 91)
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}
