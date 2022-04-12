/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niespana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:40:10 by niespana          #+#    #+#             */
/*   Updated: 2022/04/09 14:40:10 by niespana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void	ft_print_hex_char(char c, const char *s)
{
	ft_putchar_fd(s[c % 16], 1);
	ft_putchar_fd(s[c / 16], 1);
}

void	ft_print_hex(long s, int cas)
{
	const char	*base;

	base = "0123456789abcdef";
	if (cas)
		base = "0123456789ABCDEF";
	while (*s != '\0')
	{
		ft_print_hex_char(*s, (const char*)base);
		s++;
	}
}
