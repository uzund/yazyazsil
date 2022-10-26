#include <unistd.h>

void    ft_putchr(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int n)
{
    if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    else if (n < 0)
    {
        write(1, "-", 1);
        n *= -1;
    }
    else if (n > 9)
        ft_putnbr(n / 10);
    ft_putchr((n % 10) + '0');
}

int main(int ac, char **av)
{
    (void) av;
    if (ac >= 2)
    {
        ft_putnbr(ac - 1);
        write(1, "\n", 1);
    }
    else
    {
        write(1, "0\n", 2);
        return (0);
    }
}