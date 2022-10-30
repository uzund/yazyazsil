#include <stdio.h>
#include <stdlib.h>
 
int ft_blank(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

int		ft_valid(char c, int base)
{
	char digits[17] = "0123456789abcdef";
	char digits2[17] = "0123456789ABCDEF";

	while (base--)
		if (digits[base] == c || digits2[base] == c)
			return (1);
	return (0);
}

int		value_of(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int nbr;
	int sign;

	nbr = 0;
	sign = 1;
	while (ft_blank(*str))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		++str; 
	while (ft_valid(*str, str_base))
		nbr = nbr * str_base + value_of(*str++);
	return (nbr * sign);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		printf("ft_atoi_base sonucu: %d\n", ft_atoi_base(av[1], atoi(av[2])));
	return (0);
}

