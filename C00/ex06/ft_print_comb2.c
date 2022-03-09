#include <unistd.h>

void    ft_putint(int n)
{
    char    c;

    c = n + '0';
    write(1, &c, 1);
}

void    ft_print_numbers(int n)
{
    if (n <= 9)
    {
        ft_putint(0);
        ft_putint(n);
    }
    else
    {
        ft_putint(n / 10);
        ft_putint(n % 10);
    }
}

void    ft_print_comb2(void)
{
    int a;
    int b;

    a = 0;
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            ft_print_numbers(a);
            write(1, " ", 1);
            ft_print_numbers(b);
            if (!(a == 98 && b == 99))
                write(1, ", ", 2);
            b++;
        }
        a++;
    }
}

int main(void)
{
    ft_print_comb2();
    return (0);
}
