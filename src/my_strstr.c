/*
** ETNA PROJECT, 25-10-2018 by hauteb_m
** my_strstr
** File description:
**      my strstr
*/

#include <libmy.h>

char *my_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = 0;
    int sz = 0;
    
    sz = my_strlen(to_find);

    if (sz == 0) 
        return str;

    while (str[i] != '\0') {
        while (to_find[j] == str[i + j]) {
            if (j == sz - 1) {
                return str + i;
            }
            j++;
        }
        j = 0;
        i++;
    }
    return 0;
}
