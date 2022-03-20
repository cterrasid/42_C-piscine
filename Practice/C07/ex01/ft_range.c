#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int i;
    int len;
    int *range;

    if (min < max)
    {
        i = 0;
        len = max - min;
        range = (int*)malloc(sizeof(int) * len);
        while (min < max)
            range[i++] = min++;
        return (range);
    }
    return (NULL);
}

int main(void)
{
    int *range = ft_range(5, 20);
    printf("%d\n", range[0]);
    printf("%d\n", range[1]);
    printf("%d\n", range[2]);
    printf("%d\n", range[3]);
    printf("%d\n", range[4]);
    printf("%d\n", range[5]);
    printf("%d\n", range[6]);
    printf("%d\n", range[7]);
    printf("%d\n", range[8]);
    printf("%d\n", range[9]);
    printf("%d\n", range[10]);
    printf("%d\n", range[11]);
    printf("%d\n", range[12]);
    printf("%d\n", range[13]);
    printf("%d\n", range[14]);
    return (0);
}