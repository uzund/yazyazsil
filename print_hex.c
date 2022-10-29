#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int nbr;
    int sign;

    i = 0;
    nbr = 0;
    sign = 1;
    while(str[i] < 32)
        i++;
    if (str[i] == '-')
        sign *= -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        nbr = (str[i] - '0') + (nbr * 10);
        i++;
    }
    return (nbr * sign);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbrx(unsigned int nbrx, char c)
{
	if (nbrx == 0)
	{
		write(1, "0", 1);
	}
	if (nbrx >= 16)
		ft_putnbrx(nbrx / 16, c);
	if (c == 'x')
		ft_putchar("0123456789abcdef"[nbrx % 16]);
	else
		ft_putchar("0123456789ABCDEF"[nbrx % 16]);
}

int main(int ac, char **av)
{
    int nbr;
f
    if (ac == 2)
    {
        nbr = ft_atoi(av[1]);
        if (nbr < 0)
        {
            write(1, "\n", 1);
            return (0);
        }
        ft_putnbrx(nbr, 'x');
        write(1, "\n", 1);
        return (0);
    }
    else 
    {
        write(1, "\n", 1);
        return (0);
    }
}