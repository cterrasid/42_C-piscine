#include <stdio.h>

int ft_strlen(char *str)
{
    unsigned int i;

    i = 0;
    while(*str++)
        i++;
    return (i);
}

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    len;
    unsigned int    i;

    len = ft_strlen(src);
    i = 0;
    if (size < 1)
		return (ft_strlen(src));
    while (src[i] && dest[i] && i < (size - 1))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (len);
}

int main(void)
{
    char    src[] = "Hola";
    char    dest[] = "Hey";
    unsigned int    size = 0;
    printf("%i\n", ft_strlcpy(dest, src, size));
    printf("%s\n", dest);
    return (0);
}
