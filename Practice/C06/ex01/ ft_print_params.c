#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 0;
    (void)ac;
    while (av[++i])
    {
        j = 0;
        while(av[i][j])
            write(1, &av[i][j++], 1);
        write(1, "\n", 1);
    }
    return (0);
}