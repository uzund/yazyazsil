/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:40:28 by duzun             #+#    #+#             */
/*   Updated: 2022/11/03 18:59:20 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-' && str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (str[i] - '0') + (nbr * 10);
		i++;
	}
	return (nbr * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
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
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	main(int ac, char **av)
{
	int	nbr;
	int	i;
	int	sum;
	int	k;

	if (ac == 2)
	{
		nbr = ft_atoi(av[1]);
		if (nbr < 0)
		{
			write(1, "0\n", 2);
			return (0);
		}
		k = 0;
		sum = 0;
		while (nbr >= 2)
		{
			i = nbr;
			while (i >= 2)
			{
				if (nbr % i == 0)
					k++;
				i--;
			}
			if (k == 1)
				sum += nbr;
			k = 0;
			nbr--;
		}
		ft_putnbr(sum);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "0\n", 2);
		return (0);
	}
}
