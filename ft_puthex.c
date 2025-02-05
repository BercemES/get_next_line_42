/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:28:06 by bekinci-          #+#    #+#             */
/*   Updated: 2024/11/07 15:28:06 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(const char type, unsigned int n)
{
	int		i;
	char	*hex_up;
	char	*hex_low;

	hex_up = "0123456789ABCDEF";
	hex_low = "0123456789abcdef";
	i = 0;
	if (n >= 16)
		i += ft_puthex(type, n / 16);
	if (type == 'x')
		ft_putch(hex_low[n % 16]);
	else
		ft_putch(hex_up[n % 16]);
	return (i + 1);
}
