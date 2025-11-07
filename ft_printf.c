/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:47:33 by jtruckse          #+#    #+#             */
/*   Updated: 2025/11/07 02:03:32 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_check_type(*input, va_list)
{
	if (*input == c)
		else if (input == s)
			else if (input == p)
				else if (input == d)
					else if (input == i)
						else if (input == u)
							else if (input == x)
								else if (input == X)
}


int ft_printf(const char *format, ...)
{
	va_list ap;
	char	*input;
	int		i;

	i = 0;
	input = format;
	va_start(ap, format);
	if (!input[i])
		return (NULL);
		while (intput[i] != '\0')
	if (input[i] == %)
	ft_check_type(input[++i], ap);
	i++;
	va_end(ap);
}
