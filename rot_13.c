/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:39:03 by duzun             #+#    #+#             */
/*   Updated: 2022/11/06 18:20:35 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'M')
				ft_putchar(av[1][i] + 13);
			else if (av[1][i] >= 'N' && av[1][i] <= 'Z')
				ft_putchar(av[1][i] - 13);
			else if (av[1][i] >= 'a' && av[1][i] <= 'm')
				ft_putchar(av[1][i] + 13);
			else if (av[1][i] >= 'n' && av[1][i] <= 'z')
				ft_putchar(av[1][i] - 13);
			else
				write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
}
