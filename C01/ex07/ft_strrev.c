#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(*str++)
        i++;
    return (i);
}

char    *ft_strrev(char *str)
{
    char    aux;
    int     i;
    int     size;

    i = 0;
    size = ft_strlen(str);
    while(i <= size / 2)
    {
        aux = str[i];
        str[i] = str[size - 1];
        str[size - 1] = aux;
        i++;
        size--;
    }
}

int main(void)
{
    char    str[] = "Hola";
    printf("Before: %s\n", str);
    ft_strrev(str);
    printf("After: %s\n", str);
    return (0);
}