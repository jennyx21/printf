/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jennyx21 <jennyx21@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 22:41:31 by jennyx21          #+#    #+#             */
/*   Updated: 2025/11/24 00:01:53 by jennyx21         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthexnumbers(int n, char type)
{
    int		i;
	char	digit;
    // NUMMERS= 123456789abcdef; 10 -> a  = 97 48 
    // 1 +0 1+ 48 = 49 = ascii 1 
    // <10 + 0 
    // =>10 + a 97

	i = 1;
	if (n > 15)
	{
		i += ft_puthexnumbers(n / 16, type);
	}
    digit = n % 16 + 'a';
	write(1, &digit, 1);
	return (i);
}
