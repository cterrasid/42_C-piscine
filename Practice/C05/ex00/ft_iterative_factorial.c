#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int f;

    f = nb;
    if (nb < 0)
        return (0);
    if (nb == 0)
        return (1);
    while (--f != 0)
        nb *= f;
    return (nb);
}


int main(void)
{
    printf("%i\n", ft_iterative_factorial(0));
    printf("%i\n", ft_iterative_factorial(1));
    printf("%i\n", ft_iterative_factorial(2));
    printf("%i\n", ft_iterative_factorial(3));
    printf("%i\n", ft_iterative_factorial(4));
    printf("%i\n", ft_iterative_factorial(5));
    printf("%i\n", ft_iterative_factorial(6));
    printf("%i\n", ft_iterative_factorial(7));
    printf("%i\n", ft_iterative_factorial(8));
    printf("%i\n", ft_iterative_factorial(9));
    printf("%i\n", ft_iterative_factorial(10));
    printf("%i\n", ft_iterative_factorial(11));
    printf("%i\n", ft_iterative_factorial(12));
    return (0);
}