#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

int main(void)
{
    int a = 15;
    int b = 20;
    printf("Before: a -> %i, b -> %i\n", a, b);
    ft_swap(&a, &b);
    printf("After: a -> %i, b -> %i\n", a, b);
    return (0);
}