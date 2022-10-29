#include <unistd.h>
#include <stdlib.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned nbrx, char c)
{
	// if (nbrx == 0)
	// 	write(1, "0", 1);
	if (nbrx >= 16)
	{
		ft_puthex(nbrx / 16, c);
	}
	if (c == 'x')
		ft_putchar("0123456789abcdef"[nbrx % 16]);
	else
		ft_putchar("0123456789ABCDEF"[nbrx % 16]);
}

int main(int ac, char **av)
{
    int nbr;

    if (ac == 2)
    {
        nbr = atoi(av[1]);
        if (nbr < 0)
        {
            write(1, "\n", 1);
            return (0);
        }
        ft_puthex(nbr, 'x');
        write(1, "\n", 1);
        return (0);
    }
    else 
    {
        write(1, "\n", 1);
        return (0);
    }
}