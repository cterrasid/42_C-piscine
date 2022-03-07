#include <unistd.h>

void    ft_print_numbers(void)
{
    char    init;

    init = '0';
    while(init <= '9')
    {
        write(1, &init ,1);
        init++;
    }
}

int main(void)
{
    ft_print_numbers();
    return (0);
}