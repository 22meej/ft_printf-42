/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:42:38 by amejdoub          #+#    #+#             */
/*   Updated: 2023/12/24 17:29:23 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

static void	formating(va_list args, const char format, int *res)
{
	if (format == 's')
		ft_putstr_fd(va_arg(args, char *), res);
	else if (format == 'c')
		ft_putchar_fd(va_arg(args, int), res);
	else if ((format == 'd' || format == 'i'))
		ft_putnbr_fd(va_arg(args, int), res);
	else if (format == 'p')
		to_hex (va_arg(args, unsigned long), res);
	else if (format == 'x' || format == 'X')
		deci_hex(va_arg(args, unsigned long), res, format);
	else if (format == 'u')
		ft_putunsi_fd(va_arg(args, unsigned int), res);
	else
		ft_putchar_fd(format, res);
}

int	ft_printf(const char *format, ...)
{
	int			i;
	int			res;
	va_list		args;

	va_start(args, format);
	if (write(1, "", 0) == -1)
		return (-1);
	i = 0;
	res = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			formating(args, format[i], &res);
		}
		else if (format[i] != '%')
			ft_putchar_fd(format[i], &res);
		i++;
	}
	va_end(args);
	return (res);
}

int main()
{
	ft_printf("%d", ft_printf("%  s", NULL));
	// return (0);
	// printf("%d", printf("%s","1234567899"))
	// ft_printf("%d\n" ,ft_printf("%                   s%  ","abc"));
	// int fd = open("txt.txt", O_WRONLY|O_APPEND);
	// fclose(stdout);
	
    // Now any printf attempt will fail because stdout is closed
	// return (write(fd ,"test", 4));
    // if (printf("Hello, world!\n") < 0) {
    //     return (printf("Hello, world!\n"));
    //     // perror(printf("Hello, world!\n"));
    // }
	// cha ptr = 99999;
	// int i = 99;
	// printf("% uuyhfhiuhfiud",printf("%s\n",ptr));
 	// ft_printf("%       q     %",ft_printf("%s\n",ptr));
	// ft_printf("%d",ft_printf("%            qqqqq%"));
	// printf("%d",printf("helloooooo"));
	// printf("%d",printf("hello\n"));
	// ft_printf("%d",ft_printf("-hello-\n"));
	
	// //err 1
	// ft_printf("%d\n" ,ft_printf("%                   s%  ","abc"));
	// printf("%d\n" ,printf("%                   s%  ","abc"));
	
	// // err 2
	// ft_printf("%d\n" ,ft_printf("%                   s%d%                  p%$d",NULL,INT_MIN - 1, NULL,15));
	// printf("%d\n" ,printf("%                   s%d%                  p%$d",NULL,INT_MIN - 1,NULL,15));
	
	// ft_printf("%d\n" ,ft_printf(" %d      ", 77));
	// printf("%d\n" ,printf(" %d      ", 77));
	// printf("%d\n" ,printf("%vzljhqt#"));
	return 0;
}