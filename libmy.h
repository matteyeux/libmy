/*
** ETNA PROJECT, 26-10-2018 by hauteb_m
** libmy
** File description:
**      libmy header
*/

void    my_putchar(char c);
void    my_putstr(char *str);
int     my_strlen(char *str);
int     my_getnbr(char *str);
void    my_putnbr(int nb);
int     my_is_neg(int n);
int     my_is_even(int n);
int     my_is_odd(int n);
void    my_swap(int *a, int *b);
char   *my_strcpy(char *dest, char *src);
char   *my_strncpy(char *dest, char *src, int n);
int     my_strcmp(char *s1, char *s2);
int     my_strncmp(char *s1, char *s2, int n);
char   *my_strcat(char *str1, char *str2);
char   *my_strncat(char *str1, char *str2, int n);
char   *my_strstr(char *str, char *to_find);
char   *my_strupcase(char *str);
char   *my_strlowcase(char *str);
int     my_nbrlen(int n);
int     my_nbrlen_base(int n, int base);
void    my_putnbr_base(int n, char *base);
int     my_getnbr_base(char *str, char *base);
char   *my_strdup(char *str);
char  **my_str_to_wordtab(char *str);
