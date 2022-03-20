#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int aux;

    aux = *a;
    *a /= *b;
    *b %= aux;
}

int main(void)
{
    int a = 10;
    int b = 5;
    printf("Before: \na = %i\nb = %i\n", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("After: \na = %i\nb = %i\n", a, b);
    return (0);
}