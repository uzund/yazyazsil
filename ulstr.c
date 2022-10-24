#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
int main(int ac, char **av)
{
    int i;
    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    if (ac == 2)
    {
        i = 0;
        while (av[1][i] != '\0')
        {
            if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                ft_putchar(av[1][i] + 32);
            else if (av[1][i] >= 'a' && av[1][i] <= 'z')
                ft_putchar(av[1][i] - 32);
            else
                write(1, &av[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
}