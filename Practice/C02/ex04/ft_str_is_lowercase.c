#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    while (*str)
    {
        if (!(*str >= 'a' && *str <= 'z'))
        {
            return (0);
        }
        str++;
    }
    return (1);
}

int main(void)
{
    char    test1[] = ""; // 1
    char    test2[] = "TEST"; // 0
    char    test3[] = "test"; // 1
    char    test4[] = "TestING"; // 0
    char    test5[] = "test19"; // 0
    char    test6[] = "TEST55"; // 0
    char    test7[] = "52"; // 0
    char    test8[] = "@*/-+Test"; // 0
    char    test9[] = " "; // 0
    printf("%i", ft_str_is_lowercase(test1));
    return (0);
}