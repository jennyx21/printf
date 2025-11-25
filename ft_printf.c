/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:47:33 by jtruckse          #+#    #+#             */
/*   Updated: 2025/11/25 18:09:27 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putstrnchar(va_list ap, char type)
{
	char	*str;
	int		i;

	i = 0;
	if (type == 'c')
	{
		type = va_arg(ap, int);
		return (write(1, &type, 1));
	}
	if (type == 's')
	{
		str = va_arg(ap, char *);
		if (!str)
			return (write(1, "(null)", 6));
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
		return (i);
	}
	return (0);
}

static int	ft_check_type(char type, va_list ap)
{
	int	count;

	count = 0;
	if (type == 'c' || type == 's')
		count += ft_putstrnchar(ap, type);
	else if (type == 'd' || type == 'i')
		count += ft_putnbr(va_arg(ap, int), type);
	else if (type == 'u')
		count += ft_putnumbers(va_arg(ap, unsigned int), type);
	else if (type == 'x' || type == 'X')
		count += ft_puthexnumbers(va_arg(ap, unsigned int), type);
	else if (type == 'p')
		count += ft_putpointer(va_arg(ap, unsigned long), type);
	else if (type == '%')
		count += write (1, "%", 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	va_start(ap, format);
	i = 0;
	count = 0;
	if (!format[i])
		return (0);
	while (format[i] != '\0')
	{
		if (format[i] == '%' )
			count += ft_check_type(format[++i], ap);
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(ap);
	return (count);
}
