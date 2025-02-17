/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:28:35 by bekinci-          #+#    #+#             */
/*   Updated: 2024/11/07 15:28:35 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuint(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
	{
		i += ft_putuint(n / 10);
	}
	ft_putch((n % 10) + '0');
	return (i + 1);
}
