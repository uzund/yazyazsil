/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:15:39 by duzun             #+#    #+#             */
/*   Updated: 2022/12/21 21:41:45 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;
	int	num;

	if (ac == 2)
	{
		num = atoi(av[1]);
		if (num <= 0)
		{
			printf("\n");
			return (0);
		}
		else if (num == 1)
		{
			printf("1\n");
			return (0);
		}
		else
		{
			i = 2;
			while (num != 1)
			{
				if (num % i == 0)
				{
					printf("%d", i);
					num /= i;
					if (num != 1)
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
