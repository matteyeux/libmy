/*
** ETNA PROJECT, 29/10/2018 by hauteb_m
** my_str_to_wordtab
** File description:
**      filename
*/

#include <stdlib.h>
#include <libmy.h>

#define MY_IS_ALPHA(c)      ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 : 0)
#define MY_IS_NUM(c)        ((c >= '0' && c <= '9') ? 1 : 0)
#define MY_IS_ALPHANUM(c)   ((MY_IS_NUM(c) || MY_IS_ALPHA(c)) ? 1 : 0)
#define IS_SPEC_CHAR(c)           ((c <= '/' && c >= 32) || \
                            (c <= '@' && c >= ':' ) ||  \
                            (c <= '`' && c >= '[') || \
                            (c < 127 && c >= 123) \
                            ? 1 : 0)

char **my_str_to_wordtab(char *str)
{
    int i;
    int j;
    int k = 0;
    int len = my_strlen(str);
    int start = -1;
    int end = -1;
    char **tab;

    tab = malloc((my_strlen(str) + 1) * sizeof(char *));
    
    if (tab == NULL)
        return NULL;

    for (i = 0; i < len; i++) {
        if (MY_IS_ALPHANUM(str[i]) == 1 && start < 0 ) {
            start = i;
        }
        if (IS_SPEC_CHAR(str[i]) == 1 && start >= 0) {
                end = i;
        }
        
        if (start >= 0 && end >= 0) {
            tab[k] = malloc(((end - start) + 2) * sizeof(char));
            if (tab[k] == NULL)
                return NULL;

            int l = 0;
            for (j = start; j < end; j++) {
                tab[k][l] = str[j];
                l++;
            }
            
            k++;
            start = -1; end = -1;
        }
        tab[k] = NULL;
    }

    return (tab);
}
