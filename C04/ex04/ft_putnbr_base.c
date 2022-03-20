#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(*str++)
        i++;
    return (i);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     is_valid_base(char *base)
{
    int i;
    int j;
    int len;

    i = 0;
    len = ft_strlen(base);
    if (len == 0 || len == 1)
        return (0);
    while (base[i])
    {
        j = i + 1;
        if (!(base[i] >= ' ' && base[i] <= '~'))
            return (0);
        if (base[i] == '-' ||  base[i]== '+')
            return (0);
        while(base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

void    ft_putnbr_base(int nbr, char *base)
{
    int         len_base;
    long int    num;

    len_base = ft_strlen(base);
    num = nbr;
    if (is_valid_base(base))
    {
        if (num < 0)
        {
            ft_putchar('-');
            num *= -1;
        }
        if (num < len_base)
            ft_putchar(base[num]);
        if (num >= len_base)
        {
            ft_putnbr_base(num / len_base, base);
            ft_putnbr_base(num % len_base, base);
        }
    }
}

int main(void)
{
    char    base_bin[] = "01";
    char    base_hex[] = "0123456789ABCDEF";
    char    base_dec[] = "0123456789";
    char    base_oct[] = "poniguay";
    char    base_err1[] = "";
    char    base_err2[] = "A";
    char    base_err3[] = "not+2";
    char    base_err4[] = "not3-";
    char    base_err5[] = "abcda";
    int     number = 2;
    ft_putnbr_base(number, base_bin);
    write(1, "\n", 1);
    ft_putnbr_base(number, base_hex);
    write(1, "\n", 1);
    ft_putnbr_base(number, base_dec);
    write(1, "\n", 1);
    ft_putnbr_base(number, base_oct);
    write(1, "\n", 1);
    ft_putnbr_base(number, base_err1);
    write(1, "\n", 1);
    ft_putnbr_base(number, base_err2);
    write(1, "\n", 1);
    ft_putnbr_base(number, base_err3);
    write(1, "\n", 1);
    ft_putnbr_base(number, base_err4);
    return (0);
}