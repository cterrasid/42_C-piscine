#include <stdio.h>
#include <string.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int             i;
    unsigned int    j;

    i = 0;
    j = 0;
    while (dest[i])
        i++;
    while (src[j] && j < nb)
        dest[i++] = src[j++];
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
    char    dest[] = "Hola";
    char    src[] = "Pelota";
    unsigned int    nb = 0;
    // printf("Original: %s\n", strncat(dest, src, nb));
    printf("Mine: %s\n", ft_strncat(dest, src, nb));
    return (0);
}