/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:36:06 by jtruckse          #+#    #+#             */
/*   Updated: 2025/11/25 17:11:56 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putpointerhex(unsigned long ap, char type)
{
	int		i;
	char	digit;

	i = 1;
	if (ap > 15)
	{
		i += ft_putpointerhex(ap / 16, type);
	}
	digit = ap % 16 ;
	if (digit <= 9)
		digit += '0';
	else
		digit += 'a' - 10;
	write(1, &digit, 1);
	return (i);
}

int	ft_putpointer(unsigned long ap, char type)
{
	if (ap == 0)
		write(1, "(nil)", 5);
	else
	{
		write(1, "0x", 2);
		ft_putpointerhex(ap, type);
	}
	return (2);
}
