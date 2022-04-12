/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niespana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:19:28 by niespana          #+#    #+#             */
/*   Updated: 2022/04/09 13:19:29 by niespana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void	ft_handle(char c, va_list arg)
{
	if (c == 'c' || c == '%')
		ft_putchar_fd((char)va_arg(arg, int), 1);
	if (c == 's')
		ft_putstr_fd((char *)va_arg(arg, char *), 1);
	if (c == 'p')
		ft_print_ptr((char *)va_arg(arg, char *));
	if (c == 'd' || c == 'i' || c == 'u')
		ft_putnbr_fd((long)va_arg(arg, int), 1);
	if (c == 'x')
		ft_print_hex((long)va_arg(arg, long), 0);
	if (c == 'X')
		ft_print_hex((long)va_arg(arg, int), 1);
}

int	ft_printf(const char *p, ...)
{
	int		i;
	va_list	arg;

	va_start(arg, p);
	i = 0;
	if (!p)
		return (-1);
	while (p[i])
	{
		if (p[i] == '%')
		{
			ft_handle(p[i + 1], arg);
			i++;
		}
		else
			ft_putchar_fd(p[i], 1);
		i++;
	}
	va_end(arg);
	return (0);
}
