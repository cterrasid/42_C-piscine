#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    while (*str)
    {
        if (!(*str >= 'A' && *str <= 'Z'))
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
    char    test2[] = "TEST"; // 1
    char    test3[] = "test"; // 0
    char    test4[] = "TestING"; // 0
    char    test5[] = "test19"; // 0
    char    test6[] = "TEST55"; // 0
    char    test7[] = "52"; // 0
    char    test8[] = "@*/-+Test"; // 0
    char    test9[] = " "; // 0
    printf("Test 1: \"\" -> %i\n", ft_str_is_uppercase(test1));
    printf("Test 2: TEST -> %i\n", ft_str_is_uppercase(test2));
    printf("Test 3: test -> %i\n", ft_str_is_uppercase(test3));
    printf("Test 4: TestING -> %i\n", ft_str_is_uppercase(test4));
    printf("Test 5: test19 -> %i\n", ft_str_is_uppercase(test5));
    printf("Test 6: TEST55 -> %i\n", ft_str_is_uppercase(test6));
    printf("Test 7: 52 -> %i\n", ft_str_is_uppercase(test7));
    printf("Test 8: @*/-+Test -> %i\n", ft_str_is_uppercase(test8));
    printf("Test 9: \" \" -> %i\n", ft_str_is_uppercase(test9));
    return (0);
}