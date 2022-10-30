/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 22:37:25 by duzun             #+#    #+#             */
/*   Updated: 2022/10/30 22:37:26 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int nbr;
	int i;
	int sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while (str[i] < 32)
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (str[i] - '0') + (nbr * 10);
		i++;
	}
	return (nbr * sign);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int nbr;
		int i;

		nbr = ft_atoi(av[1]);
		if (nbr <= 0)
		{
			write(1, "\n", 1);
			return (0);
		}
		else if (nbr == 1)
		{
			write(1, "1\n", 2);
			return (0);
		}
		else
		{
			i = 2;
			while(nbr != 1)
			{
				if (nbr % i == 0)
				{
					printf("%d", i);
					 nbr = nbr / i;  
					if (nbr != 1)
						printf("*");
				}
				else
					i++;         
			}
		}
		printf("\n");
		return (0);
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
}
