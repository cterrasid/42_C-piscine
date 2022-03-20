#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(*str++)
        i++;
    return (i);
}

int main(void)
{
    char    str[] = "Hola";
    printf("len = %i\n", ft_strlen(str));
    return (0);
}