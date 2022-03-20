#include <unistd.h>

int is_printable(char c)
{
    return (c >= ' ' && c <= '~');
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_print_hex(unsigned char n)
{
	char *base;

	base = "0123456789abcdef";
    ft_putchar('\\');
	ft_putchar(base[n / 16]);
	ft_putchar(base[n % 16]);
}

void    ft_putstr_non_printable(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (is_printable(str[i]))
            ft_putchar(str[i]);
        else ft_print_hex(str[i]);
        i++;
    }

}

int main(void)
{
    char    str[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
    return (0);
}