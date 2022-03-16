#include <stdio.h>
#include <stdlib.h>

int is_whitespace(char c)
{
    return ((c >= '\t' && c <= '\r') || c == ' ');
}

int is_sign(char c)
{
    return (c == '-' || c == '+');
}

int is_numeric(char c)
{
    return (c >= '0' && c <= '9');
}

int ft_atoi(char *str)
{
    int sign;
    int num;

    sign = 1;
    num = 0;
    while(*str)
    {
        if (is_whitespace(*str))
            str++;
        else if (is_sign(*str))
        {
            if (*str == '-')
                sign *= -1;
            str++;
        }
        else if (is_numeric(*str))
        {
            num *= 10;
            num += *str - '0';
            str++;
        }
        else
            break ;

    }
    return (sign * num);
}

int main(void)
{
    printf("Mine: %d\n", ft_atoi(" ---+--+1234ab567"));
    printf("Original: %d\n", atoi(" ---+--+1234ab567"));
    printf("Mine: %d\n", ft_atoi(" 1234ab567"));
    printf("Original: %d\n", atoi(" 1234ab567"));
    printf("Mine: %d\n", ft_atoi(" a---+--+1234ab567"));
    printf("Original: %d\n", atoi(" a---+--+1234ab567"));
    printf("Mine: %d\n", ft_atoi(" @---+--+1234ab567"));
    printf("Original: %d\n", atoi(" @---+--+1234ab567"));
    return (0);
}
