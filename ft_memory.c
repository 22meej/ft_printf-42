/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:46:18 by amejdoub          #+#    #+#             */
/*   Updated: 2023/12/21 14:49:01 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	to_hex(unsigned long num, int *i)
{
	if (num < 16)
	{
		ft_putstr_fd("0x", i);
		if (num < 10)
			ft_putchar_fd(num + '0', i);
		else
			ft_putchar_fd(num + 'a' - 10, i);
	}
	else
	{
		to_hex(num / 16, i);
		if (num % 16 < 10)
			ft_putchar_fd(num % 16 + '0', i);
		else
			ft_putchar_fd(num % 16 + 'a' - 10, i);
	}
}

void	deci_hex(unsigned int num, int *i, char c)
{
	char	a;

	if (c == 'x')
		a = 'a';
	else
		a = 'A';
	if (num < 16)
	{
		if (num < 10)
			ft_putchar_fd(num + '0', i);
		else
			ft_putchar_fd(num + a - 10, i);
	}
	else
	{
		deci_hex(num / 16, i, c);
		if (num % 16 < 10)
			ft_putchar_fd(num % 16 + '0', i);
		else
			ft_putchar_fd(num % 16 + a - 10, i);
	}
}
