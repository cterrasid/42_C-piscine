#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    unsigned int i;

    i = 0;
    while(*str++)
        i++;
    return (i);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	int				i;
	int				j;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	i = 0;
	j = d_len;
	if (size <= d_len)
		return (s_len + size);
	while (src[i] && i < size - d_len - 1)
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (d_len + s_len);
}

int main(void)
{
    char    dest[] = "Hola";
    char    src[] = "Pelota";
    unsigned int    size = 2;
    printf("Mine: %i\n", ft_strlcat(dest, src, size));
    printf("dest: %s\n", dest);
    return (0);
}