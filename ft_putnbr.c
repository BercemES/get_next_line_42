/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:28:14 by bekinci-          #+#    #+#             */
/*   Updated: 2024/11/07 15:28:14 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	i;

	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	i = 0;
	if (n < 0)
	{
		ft_putch('-');
		i++;
		n *= -1;
	}
	if (n >= 10)
	{
		i += ft_putnbr(n / 10);
	}
	ft_putch((n % 10) + '0');
	return (i + 1);
}
