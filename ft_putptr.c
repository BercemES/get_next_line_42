/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:28:20 by bekinci-          #+#    #+#             */
/*   Updated: 2024/11/07 15:28:20 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthexptr(unsigned long long p)
{
	char	*hex;
	int		i;

	hex = "0123456789abcdef";
	i = 0;
	if (p >= 16)
		i += ft_puthexptr(p / 16);
	ft_putch(hex[p % 16]);
	return (i + 1);
}

int	ft_putptr(void *p)
{
	int					i;
	unsigned long long	ptr;

	i = 2;
	ptr = (unsigned long long)p;
	if (ptr == 0)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	i += ft_puthexptr((unsigned long long)p);
	return (i);
}
