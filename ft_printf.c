/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:47:33 by jtruckse          #+#    #+#             */
/*   Updated: 2025/11/12 20:53:16 by jtruckse         ###   ########.fr       */
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
	// else if ()
	// {
	// }
	// else if (input == p)
	// {
	// }
	// else if (input == d || input == i)
	// 	else if (input == u);
	// else if (input == x || input == X)
	// {
	// }
	else
		return (0);
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

int	main(void)
{
	int result;
	char *s = NULL;
	char c = 'T';
	result = 0;
	result = printf("%c\n%s\n%%\n", c, s);
	printf("%d\n", result);
	result = ft_printf("%c\n%s\n", c, s);
	printf("%d\n", result);
	return (0);
}