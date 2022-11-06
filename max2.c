/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:10:31 by duzun             #+#    #+#             */
/*   Updated: 2022/11/03 17:27:22 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				max;

	i = 0;
	max = 0;
	if (tab)
	{
		while (i < len)
		{
			if (tab[i] > max)
				max = tab[i];
			i++;
		}
		return (max);
	}
	else
		return (max);
}
