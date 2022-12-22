/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 00:34:35 by duzun             #+#    #+#             */
/*   Updated: 2022/12/23 00:52:52 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	hcf(int a, int b)
{
	if (b == 0)
		return (a);
	else
		return (hcf(b, a % b));
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	if ((int)a <= 0 || (int)b <= 0)
		return (0);	
	return (a * b / hcf(a, b));
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	printf("En Küçük Ortak Katını (EKOK) bulmak için iki pozitif sayı girin \n");
// 	scanf("%d %d", &a, &b);
// 	printf("%d ve  %d sayılarının EKOK değeri:  %d\n", a, b, lcm(a, b));
// 	return (0);
// }
