#include <stdio.h>

int ft_str_is_printable(char *str)
{
    while (*str)
    {
        if (!(*str >= ' ' && *str <= '~'))
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
    char    test3[] = "test"; // 1
    char    test4[] = "TestING"; // 1
    char    test5[] = "test19"; // 1
    char    test6[] = "TEST55"; // 1
    char    test7[] = "52"; // 1
    char    test8[] = "@*/-+Test"; // 1
    char    test9[] = " "; // 1
    char	not[] = {4,127,1,2,0,31}; // 0
    printf("Test 1: \"\" -> %i\n", ft_str_is_printable(test1));
    printf("Test 2: TEST -> %i\n", ft_str_is_printable(test2));
    printf("Test 3: test -> %i\n", ft_str_is_printable(test3));
    printf("Test 4: TestING -> %i\n", ft_str_is_printable(test4));
    printf("Test 5: test19 -> %i\n", ft_str_is_printable(test5));
    printf("Test 6: TEST55 -> %i\n", ft_str_is_printable(test6));
    printf("Test 7: 52 -> %i\n", ft_str_is_printable(test7));
    printf("Test 8: @*/-+Test -> %i\n", ft_str_is_printable(test8));
    printf("Test 9: \" \" -> %i\n", ft_str_is_printable(test9));
    printf("Not: -> %i\n", ft_str_is_printable(not));
    return (0);
}