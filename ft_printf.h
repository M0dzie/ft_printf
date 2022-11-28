/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:33:03 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/28 15:58:37 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "../Libft/libft.h"

int		ft_printf(const char *s, ...);
int		ft_printnbr_base(int nbr, char *base);
int		ft_printunsigned(int nbr, char *base);
int		ft_printchar(int c);
int		ft_printstr(char *str);
#endif
