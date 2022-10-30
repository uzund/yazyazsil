/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 20:58:35 by duzun             #+#    #+#             */
/*   Updated: 2022/10/30 21:11:57 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char	reverse_bits(unsigned char b)
{
	unsigned int	byte_len;
	unsigned char	rev;


	rev = 0;
	byte_len = 8;

	while (byte_len--)
	{
		rev = (rev << 1) | (b & 1);
		b >>= 1;
	}
	return (rev);
}

int	main(void)
{
	unsigned char	c;

	c = reverse_bits('d');
	write(1, &c, 1);
	//       char = binary
	// char     d = 01100100      // d karekterinin binary bazında terse çevirlince
	// reverse  d = 00100110 = &  // & ve karakterinin karşılığı elde edilir.
	// 'd' karakterinin binary tersi '&' ekrana yazsırılır.
	return (0);
}
