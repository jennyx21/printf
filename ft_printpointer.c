/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:36:06 by jtruckse          #+#    #+#             */
/*   Updated: 2025/11/25 18:51:15 by jtruckse         ###   ########.fr       */
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
	int	i;

	i = 0;
	if (ap == 0)
		i += write(1, "(nil)", 5);
	else
	{
		i += write(1, "0x", 2);
		i += ft_putpointerhex(ap, type);
	}
	return (i);
}
