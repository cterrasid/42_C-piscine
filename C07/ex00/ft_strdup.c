#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(*str++)
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    char    *dup;
    int     i;

    i = 0;
    if (!(dup = (char*)malloc(sizeof(char) * ft_strlen(src) + 1)))
        return (NULL);
    while (*src)
        dup[i++] = *src++;
    dup[i] = '\0';
    return (dup);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        printf("Mine: :%s:\n", ft_strdup(av[1]));
        printf("Original: :%s:\n", strdup(av[1]));
    }
    return (0);
}
