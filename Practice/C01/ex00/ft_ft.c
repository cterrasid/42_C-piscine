#include <stdio.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int nbr;

    nbr = 9;
    printf("Before: %i\n", nbr);
    ft_ft(&nbr);
    printf("After: %i\n", nbr);
    return (0);
}