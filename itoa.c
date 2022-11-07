/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:06:27 by duzun             #+#    #+#             */
/*   Updated: 2022/11/07 19:40:53 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_count(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

int	ft_absolute(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

char	*ft_itoa(int nbr)
{
	int		len;
	char	*str;

	len = ft_count(nbr);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr < 0)
		str[0] = '-';
	else if (nbr == 0)
		str[0] = '0';
	while (nbr)
	{
		len--;
		str[len] = (ft_absolute(nbr % 10)) + '0';
		nbr /= 10;
	}
	return (str);
}

int	main(void)
{
	int	a;

	a = -1234567890;
	printf("karakte dizisi %s\n", ft_itoa(a));
	return (0);
}