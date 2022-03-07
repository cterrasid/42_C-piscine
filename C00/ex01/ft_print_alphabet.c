#include <unistd.h>

void    ft_print_alphabet(void)
{
    char    init;

    init = 'a';
    while(init <= 'z')
    {
        write(1, &init, 1);
        init++;
    }
}

int main(void)
{
    ft_print_alphabet();
    return (0);
}