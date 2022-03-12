#include <stdio.h>

char	*ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] -= ('A' - 'a');
        i++;
    }
    return (str);
}

int main(void)
{
    char    test0[] = "TEST";
    printf("%s\n", ft_strlowcase(test0));
    char    test1[] = "tesT";
    printf("%s\n", ft_strlowcase(test1));
    char    test2[] = "Test TEst";
    printf("%s\n", ft_strlowcase(test2));
    return (0);
}