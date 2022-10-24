#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i;
    int j;
    int k;

    if (ac > 1)
    {
        k = 1;
        i = 1;
        while (i <= ac - 1)
        {
            j = 0;
            while (av[i][j] != '\0')
            {   
                if (av[i][j] >= 9 && av[i][j] <= 13)
                    j++;
                else if (av[i][j] == ' ')
                {
                    write(1, &av[i][j], 1);
                    k = 1;
                }
                else if (k != 1 && (av[i][j] >= 'A' && av[i][j] <= 'Z'))
                {
                    ft_putchar(av[i][j] + 32);
                    k = 0;
                }
                else if ((av[i][j] >= 'a' && av[i][j] <= 'z') && k == 1)
                {   
                    ft_putchar(av[i][j] - 32);
                    k = 0;
                }
                else
                {
                    write(1, &av[i][j], 1);
                    k = 0;
                }
                j++;
            }
            write(1, "\n", 1);
          i++;
        }
        return (0);
    }
    else
    {
        write(1, "\n", 1);
        return (0);
    }
}