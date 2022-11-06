/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:40:38 by duzun             #+#    #+#             */
/*   Updated: 2022/11/06 18:55:39 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

// int	main( void )
// {
// 	const char cdizi1[] = "Davut UZUN";
// 	const char cdizi2[] = "UN";
// 	int	ret;

// 	ret = ft_strcspn(cdizi1, cdizi2);
// 	// Bu örnekte sonuç 6 çıkmalı.
// 	printf("Bulunan karakterin indeks değeri: %d\n", ret);
// 	return (0);
// }
