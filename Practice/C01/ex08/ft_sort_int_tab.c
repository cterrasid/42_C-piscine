#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;

    i = 0;
    j = size - 1;
    while(j > 0 && i < size)
    {
        if (tab[j] < tab[j - 1])
            ft_swap(&tab[j], &tab[j - 1]);
        if (tab[i] > tab[i + 1])
            ft_swap(&tab[i], &tab[i + 1]);
        j--;
        i++;
    }
}

int main(void)
{
    int size = 4;
    int tab[] = {1, 9, 8, 2};
    printf("Before: {%i, %i, %i, %i}\n", tab[0], tab[1], tab[2], tab[3]);
    ft_sort_int_tab(tab, size);
    printf("After: {%i, %i, %i, %i}\n", tab[0], tab[1], tab[2], tab[3]);
    return (0);
}