/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 22:25:55 by duzun             #+#    #+#             */
/*   Updated: 2022/11/06 23:07:33 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	nbr1;
	int	nbr2;
	int	rest;
	int	i;
	int	tmp;

	if (ac == 3)
	{
		nbr1 = atoi(av[1]);
		nbr2 = atoi(av[2]);
		if (nbr1 < 0 || nbr2 < 0)
		{
			write(1, "\n", 1);
			return (0);
		}
		else if (nbr1 == 0 || nbr2 == 0)
		{
			write(1, "0\n", 2);
			return (0);
		}
		else if (nbr1 == 1 || nbr2 == 1)
		{
			write(1, "1\n", 2);
			return (0);
		}
		if (nbr2 > nbr1)
		{
			tmp = nbr2;
			nbr2 = nbr1;
			nbr1 = tmp;
		}
		rest = nbr2;
		i = 1;
		while (i != 0)
		{
			tmp = nbr1 % nbr2;
			if (tmp != 0)
				rest = tmp;
			i = tmp;
			nbr1 = nbr2;
			nbr2 = tmp;
		}
		printf("%d\n", rest);
		return (0);
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
}
