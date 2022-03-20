#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int aux;
    int i;
    int j;

    i = 0;
    j = size - 1;
    while(i < (size/2))
    {
        aux = tab[i];
        tab[i] = tab[j];
        tab[j] = aux;
        i++;
        j--;
    }
}

int main(void)
{
    int size = 4;
    int tab[] = {1, 6, 8, 5};
    printf("Before: {%i, %i, %i, %i}\n", tab[0], tab[1], tab[2], tab[3]);
    ft_rev_int_tab(tab, size);
    printf("After: {%i, %i, %i, %i}\n", tab[0], tab[1], tab[2], tab[3]);
    return (0);
}