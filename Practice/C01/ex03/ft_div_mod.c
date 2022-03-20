#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main(void)
{
    int a = 10;
    int b = 5;
    int div;
    int mod;
    ft_div_mod(a, b, &div, &mod);
    printf("div -> %i, mod -> %i\n", div, mod);
    return (0);
}