/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:09:54 by duzun             #+#    #+#             */
/*   Updated: 2022/10/30 21:11:32 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	i;
		int	nbr;

		nbr =  atoi(av[1]);
		if (nbr <= 0)
		{
			write(1, "\n", 1);
			return (0);
		}
		i = 2;
		while (nbr != 1)
		{
			if (nbr % i == 0)
			{
				printf("%d", i);
				nbr /= i;
				if (nbr != 1)
					printf("*");
			}
			else
				i++;
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