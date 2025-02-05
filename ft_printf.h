/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:27:51 by bekinci-          #+#    #+#             */
/*   Updated: 2024/11/07 15:27:51 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"

int	ft_printf(const char *s, ...);
int	ft_putch(int n);
int	ft_puthex(const char type, unsigned int n);
int	ft_putnbr(int n);
int	ft_putptr(void *p);
int	ft_putstr(char *s);
int	ft_putuint(unsigned int n);

#endif
