#include <stdio.h>

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return (len);
}

int main(void)
{
    printf("%i\n", ft_strlen("Hola"));
    printf("%i\n", ft_strlen(""));
    return (0);
}
