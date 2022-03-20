#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    while (*str)
    {
        if (!(*str >= '0' && *str <= '9'))
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
    char    test3[] = "test"; // 0
    char    test4[] = "TestING"; // 0
    char    test5[] = "test19"; // 0
    char    test6[] = "TEST55"; // 0
    char    test7[] = "52"; // 1
    char    test8[] = "@*/-+Test"; // 0
    char    test9[] = " "; // 0
    printf("%i", ft_str_is_numeric(test9));
    return (0);
}