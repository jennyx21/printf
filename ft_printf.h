/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:48:19 by jtruckse          #+#    #+#             */
/*   Updated: 2025/11/24 14:53:21 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putnumbers(unsigned int n, char type);
int	ft_putnbr(int n, char type);
int	ft_puthexnumbers(unsigned int n, char type);

#endif