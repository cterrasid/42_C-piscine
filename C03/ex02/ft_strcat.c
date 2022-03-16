#include <stdio.h>
#include <string.h>

char    *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i])
        i++;
    while (src[j])
        dest[i++] = src[j++];
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
    char    dest[] = "Hola";
    char    src[] = "Pelota";
    // printf("Original: %s\n", strcat(dest, src));
    printf("Mine: %s\n", ft_strcat(dest, src));
    return (0);
}