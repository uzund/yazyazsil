#include <unistd.h>

int ft_double(char *str, char c, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (str[i] == c)
            return 0;
        i++;
    }
    return (1);
}
int main(int ac, char **av)
{
    int i;
    int j;
    if (ac == 3)
    {
        i = 0;
        while (av[1][i] != '\0')
        {
            j = 0;
            while (av[2][j] != '\0')
            {
                if (av[1][i] == av[2][j] && ft_double(av[1], av[2][j], i))
                {
                write(1, &av[1][i], 1);
                break ;
                }
                j++;
            }
            i++;
        }
        write(1, "\n", 1);
    }
    if (ac != 3)
    {
        write(1, "\n", 1);
        return (0);
    }

}