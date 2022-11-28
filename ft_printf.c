/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:12:01 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/28 16:09:04 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_type(const char format, va_list arg)
{
	int	print_len;

	print_len = 0;
	if (format == 'c')
		print_len += ft_printchar(va_arg (arg, int));
	else if (format == 's')
		print_len += ft_printstr(va_arg(arg, char *));
	// else if (format == 'p')
	// 	print_len += 
	else if (format == 'd' || format == 'i')
		print_len += ft_printnbr_base(va_arg(arg, int), "0123456789");
	else if (format == 'u')
		print_len += ft_printunsigned(va_arg(arg, unsigned int), "0123456789");
	else if (format == 'x')
		print_len += ft_printnbr_base(va_arg(arg, int), "0123456789abcdef");
	else if (format == 'X')
		print_len += ft_printnbr_base(va_arg(arg, int), "0123456789ABCDEF");
	else if (format == '%')
		print_len += ft_printchar('%');
	else
		print_len += ft_printchar(format);
	return (print_len);
}

/**
 * @brief formats and prints its arguments, after the first, under control of 
 * the format
 * @param s
 * @return display messages as well as values on the standard output device
 */
int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		print_len;
	int		len_temp;
	int		i;

	i = 0;
	print_len = 0;
	va_start(arg, format);
	if (write(1, 0, 0) != 0)
		return (-1);
	while (format[i])
	{
		len_temp = print_len;
		if (format[i] == '%' && format[i + 1] != '\0')
			print_len += check_type(format[++i], arg);
		else if (format[i] != '%')
			print_len += ft_printchar(format[i]);
		if (print_len < len_temp)
			return (-1);
		i++;
	}
	va_end(arg);
	return (print_len);
}
