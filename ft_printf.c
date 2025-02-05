/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:27:30 by bekinci-          #+#    #+#             */
/*   Updated: 2024/11/07 15:27:30 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_format(const char type, va_list arg)
{
	int	i;

	i = 0;
	if (type == 'c')
		i += ft_putch(va_arg(arg, int));
	else if (type == 's')
		i += ft_putstr(va_arg(arg, char *));
	else if (type == 'p')
		i += ft_putptr(va_arg(arg, void *));
	else if (type == 'i' || type == 'd')
		i += ft_putnbr(va_arg(arg, int));
	else if (type == 'u')
		i += ft_putuint(va_arg(arg, unsigned int));
	else if (type == 'x' || type == 'X')
	{
		i += ft_puthex(type, va_arg(arg, unsigned int));
	}
	else if (type == '%')
		i += ft_putch(type);
	return (i);
}

int	func_undb(const char *s)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	if (s[i] != '\0')
	{
		ft_putch('%');
		j += ft_putch(s[i]);
	}
	return (j + 1);
}

int	ft_printf(const char *s, ...)
{
	va_list	list;
	int		i;
	int		j;

	va_start(list, s);
	i = 0;
	j = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] != '\0' && (ft_strchr("cspdiuxX%", s[i]) != NULL))
				j += ft_format(s[i], list);
			else
				j += func_undb(s + i);
		}
		else
			j += ft_putch(s[i]);
		i++;
	}
	va_end(list);
	return (j);
}
