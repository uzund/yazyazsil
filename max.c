/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:07:20 by duzun             #+#    #+#             */
/*   Updated: 2022/10/30 21:07:26 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	max(int *tab, unsigned int len)
{
	int				maxnumber;
	unsigned int	i;

	if (tab[0] == '\0')
		return (0);
	i = 0;
	maxnumber = tab[0];
	while (i < len)
	{
		if (tab[i] > maxnumber)
			maxnumber = tab[i];
		i++;
	}
	return (maxnumber);
}
