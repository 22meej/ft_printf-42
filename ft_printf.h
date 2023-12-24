/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:43:55 by amejdoub          #+#    #+#             */
/*   Updated: 2023/12/24 17:16:44 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
#include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int		ft_printf(const char *format, ...);
void	ft_putchar_fd(char c, int *i);
void	ft_putstr_fd(char *s, int *i);
void	ft_putnbr_fd(int n, int *i);
void	to_hex(unsigned long num, int *i);
void	ft_putunsi_fd(unsigned int n, int *i);
void	deci_hex(unsigned int num, int *i, char c);
#endif
