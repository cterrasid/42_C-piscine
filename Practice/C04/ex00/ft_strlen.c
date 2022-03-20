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
    printf("%i\n", ft_strlen("Hola"));
    printf("%i\n", ft_strlen(""));
    return (0);
}
