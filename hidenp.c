#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(*str++)
        i++;
    return (i);
}
int main(int ac, char **av)
{
    int i;
    int j;
    int k;

    if (ac == 3)
    {
        if (ft_strlen(av[1]) > ft_strlen(av[2]))
        {
            write(1, "0\n", 2);
            return (0);
        }
        i = 0;
        k = 0;
        while (av[1][i] != '\0')
        {
            j = i;
             while (av[2][j] != '\0')
            {
                if (av[1][i] == av[2][j])
                  {
                    k++;
                    break;
                }
                   j++;
            }
            i++;
        }
        if (k  == ft_strlen(av[1]))
        {
            write(1, "1\n", 2);
            return (0);
        }
        else
        {
            write(1, "0\n", 2);
            return (0);
        }
    }
    else
    {
        write(1, "\n", 1);
        return (0);
    }
}