/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnumbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 18:19:25 by jtruckse          #+#    #+#             */
/*   Updated: 2025/11/23 19:35:01 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// unsigned unsigned unsigned unsigned unsigned unsigned unsigned number

int	ft_putnumbers(unsigned int n, char type)
{
	int		i;
	char	digit;


	i = 1;
	if (n > 9)
	{	
		i += ft_putnumbers(n / 10, type);
		 //printf("printf:###%d###\n", n);
	}
	digit = n % 10 + '0';
	write(1, &digit, 1);
	return (i);
}


int	ft_putnbr(int n, char type)
{
	int		sign;
	int		i;

	sign = 0;
	i = 0;


	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
		sign = 1;
		i += ft_putnumbers(n, type);
	}
	else
		i += ft_putnumbers(n, type);
	return (i + sign);
}


