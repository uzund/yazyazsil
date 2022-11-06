/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:33:21 by duzun             #+#    #+#             */
/*   Updated: 2022/10/31 10:53:19 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_double(char *str, char c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int	i;
		int	j;

		i = 0;
		while (av[1][i] != '\0')
		{
			j = 0;
			while (av[2][j] != '\0')
			{
				if (av[1][i] == av[2][j] && ft_double(av[1], av[2][j], i))
				{
					write(1, &av[1][i], 1);
					break ;
				}
				j++;
			}
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
