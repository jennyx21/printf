/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 22:41:31 by jennyx21          #+#    #+#             */
/*   Updated: 2025/11/24 17:19:37 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexnumbers(unsigned int n, char type)
{
	int		i;
	char	digit;

	i = 1;
	if (n > 15)
	{
		i += ft_puthexnumbers(n / 16, type);
	}
	digit = n % 16 ;
	if (type == 'x')
	{
		if (digit <= 9)
			digit += '0';
		else
			digit += 'a' - 10;
	}
	if (type == 'X')
	{
		if (digit <= 9)
			digit += '0';
		else
			digit += 'A' - 10;
	}
	write(1, &digit, 1);
	return (i);
}

