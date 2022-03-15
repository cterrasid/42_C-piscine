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
	unsigned int i;
	unsigned int j;

	i = ft_strlen(dest);
	j = 0;
	if (size < 1)
		return (ft_strlen(src) + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < ft_strlen(dest))
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(dest) + ft_strlen(src));
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