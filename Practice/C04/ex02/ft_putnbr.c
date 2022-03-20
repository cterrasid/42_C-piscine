#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(nb * -1);
    }
    else if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else ft_putchar(nb + '0');
}

int main(void)
{
    ft_putnbr(6);
    write(1, "\n", 1);
    ft_putnbr(-6);
    write(1, "\n", 1);
    ft_putnbr(666);
    write(1, "\n", 1);
    ft_putnbr(-666);
    write(1, "\n", 1);
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    ft_putnbr(2147483647);
    return (0);
}