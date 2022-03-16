#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    if (n == 0)
        return (0);
    while (s1[i] && (s1[i] == s2[i]) && i < n)
        i++;
    return (s1[i] - s2[i]);
}

int main(void)
{
    char    *a = "Clarette";
    char    *b = "Clare";
    char    *c = "clarette";
    unsigned int    n = 1;
	printf("%s\n", "Mi funcion:");
    printf("s1 > s2: %i\n", ft_strncmp(a, b, n));
    printf("s1 > s2: %i\n", ft_strncmp(c, a, n));
    printf("s1 < s2: %i\n", ft_strncmp(b, a, n));
    printf("s1 == s2: %i\n", ft_strncmp(a, a, n));
    printf("\n%s\n", "Funcion original:");
	printf("s1 > s2: %i\n", strncmp(a, b, n));
    printf("s1 > s2: %i\n", strncmp(c, a, n));
    printf("s1 < s2: %i\n", strncmp(b, a, n));
    printf("s1 == s2: %i\n", strncmp(a, a, n));
    return (0);
}