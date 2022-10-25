#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i;
    int nbr;

    if (ac == 2)
    {
        nbr = atoi(av[1]);
        if (nbr < 0)
        {
            write(1, "\n", 1);
            return (0);
        }
        i = 2;
        while (nbr > 1)
        {
            if (nbr % i == 0)
            {
                printf("%d", i);
                nbr = nbr / i;
                if (nbr != 1)
                    printf("*");
            }
            if (nbr % i != 0)
                i++;
        }
        printf("\n");
    }
    else
    {
        write(1, "\n", 1);
        return (0);
    }
}