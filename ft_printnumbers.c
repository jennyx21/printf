/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnumbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 18:19:25 by jtruckse          #+#    #+#             */
/*   Updated: 2025/11/20 18:12:37 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(va_list ap, char type)
{
	long int	nr;
	int			i ;

	i = 0;
	nr = va_arg(ap, int);
	while (nr[i])
	{
		

	}

}

int	ft_putunbr(va_list ap, char type)
{
}
