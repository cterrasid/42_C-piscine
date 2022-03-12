#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
    *dest = *src++;
	return (dest);
}

int main(void)
{
    char    s1[] = "Calamar ddd";
    char    s2[] = "mememe";
    printf("Original: %s\n", strcpy(s1, s2));
    printf("Mine: %s\n", ft_strcpy(s1, s2));
    return (0);
}