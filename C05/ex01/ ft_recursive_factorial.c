#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return (0);
    else if (nb == 0)
        return (1);
    else
        return (nb * ft_recursive_factorial(nb - 1));
}

int main(void)
{
    printf("%i\n", ft_recursive_factorial(0));
    printf("%i\n", ft_recursive_factorial(1));
    printf("%i\n", ft_recursive_factorial(2));
    printf("%i\n", ft_recursive_factorial(3));
    printf("%i\n", ft_recursive_factorial(4));
    printf("%i\n", ft_recursive_factorial(5));
    printf("%i\n", ft_recursive_factorial(6));
    printf("%i\n", ft_recursive_factorial(7));
    printf("%i\n", ft_recursive_factorial(8));
    printf("%i\n", ft_recursive_factorial(9));
    printf("%i\n", ft_recursive_factorial(10));
    printf("%i\n", ft_recursive_factorial(11));
    printf("%i\n", ft_recursive_factorial(12));
    return (0);
}
