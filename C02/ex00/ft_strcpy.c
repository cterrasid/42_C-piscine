#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
	return (dest);
}

int main(void)
{
    char    dest1[] = "Dest";
    char    src1[] = "Sourceeee";
    char    dest2[] = "Dest";
    char    src2[] = "Sourceeee";
    printf("Original: %s\n", strcpy(dest1, src1));
    printf("Mine: %s\n", ft_strcpy(dest2, src2));
    return (0);
}