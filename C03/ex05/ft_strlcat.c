#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    unsigned int    len;

    len = 0;
    while(str[len])
        len++;
    return (len);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    int             i;
    unsigned int    j;
    unsigned int    len;

    j = 0;
    i = ft_strlen(dest);
    len = i + ft_strlen(src);
    if (size == 0)
        return ft_strlen(src);
    while (src[j] && j < (size - 1))
        dest[i++] = src[j++];
    dest[i] = '\0';
    return (len);
}

int main(void)
{
    char    dest[] = "Hola";
    char    src[] = "Pelota";
    unsigned int    size = 0;
    printf("Mine: %i\n", ft_strlcat(dest, src, size));
    printf("Original strncat: %s\n", strncat(dest, src, size));
    printf("dest: %s\n", dest);
    return (0);
}