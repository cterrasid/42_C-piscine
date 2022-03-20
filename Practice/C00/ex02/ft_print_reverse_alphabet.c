#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    char    init;

    init = 'z';
    while(init >= 'a')
    {
        write(1, &init, 1);
        init--;
    }
}

int main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}