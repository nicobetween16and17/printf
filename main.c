/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niespana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:02:32 by niespana          #+#    #+#             */
/*   Updated: 2022/04/12 15:02:34 by niespana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "print.h"

int	main(void)
{
	char	*s;

	s = "a";
	ft_print_hex("bonjour", 0);
	printf("%p\n", &s);
	ft_print_ptr(&s);
}
