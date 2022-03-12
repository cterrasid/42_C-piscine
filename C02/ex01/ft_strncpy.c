#include <stdio.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (src[i] && dest[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
	return (dest);
}

int main(void)
{
    char    dest1[] = "Hola tu";
    char    src1[] = "Supercalifragilisticuespialidoso";
    char    dest2[] = "Hola tu";
    char    src2[] = "Supercalifragilisticuespialidoso";
    printf("Original: %s\n", strncpy(dest1, src1, 5));
    printf("Mine: %s\n", ft_strncpy(dest2, src2, 5));
    return (0);
}