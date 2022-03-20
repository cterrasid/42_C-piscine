#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    if (power < 0)
        return (0);
    else if (power == 0)
        return (1);
    while (--power)
        nb *= nb;
    return (nb);
}

int main(void)
{
    printf("%i\n", ft_iterative_power(-3, 2));
    printf("%i\n", ft_iterative_power(1, -1));
    printf("%i\n", ft_iterative_power(2, 0));
    printf("%i\n", ft_iterative_power(2, 2));
    return (0);
}