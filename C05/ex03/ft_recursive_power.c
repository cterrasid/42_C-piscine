#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    else if (power == 0)
        return (1);
    else
        return (nb * ft_recursive_power(nb, power - 1));
}

int main(void)
{
    printf("%i\n", ft_recursive_power(-3, 2));
    printf("%i\n", ft_recursive_power(1, -1));
    printf("%i\n", ft_recursive_power(2, 0));
    printf("%i\n", ft_recursive_power(2, 2));
    return (0);
}