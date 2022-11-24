/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:33:03 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/24 13:53:31 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include "../Libft/libft.h"

int		ft_printf(const char *s, ...);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_switch(va_list arg, const char *format);
#endif
