/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:34:56 by amejdoub          #+#    #+#             */
/*   Updated: 2023/12/21 15:33:16 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int *i)
{
	write(1, &c, 1);
	*i += 1;
}

void	ft_putstr_fd(char *s, int *i)
{
	if (!s)
	{
		ft_putstr_fd("(null)", i);
		return ;
	}
	while (*s)
	{
		ft_putchar_fd(*s, i);
		s++;
	}
}
