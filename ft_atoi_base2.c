#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_nbrbase(char c, int base)
{
    if (base <= 9)
        return (c >= '0' && c <= '9');
    return ((c >= '0' && c <= '9') || (c >= 'A' && c <= ('A' + base - 10)) || \
            (c >= 'a' && c <= ('a' + base - 10)));
}

int ft_atoi_base(const char *str, int base)
{
    int i;
    int nbr;
    int sign;

    if (!str[0] || base < 2 || base > 16)
        return (0);
    
    i = 0;
    nbr = 0;
    sign = 1;
    while (str[i] <= 32)
        i++;
    if (str[i] == '-' || str[i] == '+')
        if (str[i++] == '-')
            sign *= -1;
    while (str[i] && ft_nbrbase(str[i], base))
    {
        if (str[i] >= 'A' && str[i] <= 'F')
            nbr = (nbr * base) + (str[i] - 'A' + 10);
        else if (str[i] >= 'a' && str[i] <= 'f')
            nbr = (nbr * base) + (str[i] - 'a' + 10);
        else    
            nbr = (nbr * base) + (str[i] - '0');
        i++;
    }
    return (nbr * sign);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		printf("ft_atoi_base sonucu: %d\n", ft_atoi_base(av[1], atoi(av[2])));
	return (0);
}
