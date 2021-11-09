/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kezekiel <kezekiel@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:49:46 by kezekiel          #+#    #+#             */
/*   Updated: 2021/11/09 14:48:30 by kezekiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_print
{
	va_list	args;
	int		len;
}		t_print;

int		ft_printf(const char *format, ...);

void	putdeci(unsigned int i, t_print *tab);
void	puthexlow(unsigned int i, t_print *tab);
void	puthexup(unsigned int i, t_print *tab);
void	putptr(unsigned long int i, t_print *tab);

void	hexlow(t_print *tab);
void	hexup(t_print *tab);

void	isptr(t_print *tab);
void	ischar(t_print *tab);
void	isint(t_print *tab);
void	isstr(t_print *tab);
void	isdecint(t_print *tab);
void	isperc(t_print *tab);

char	*ft_strchr(const char *s, int c );
void	ft_putchar(char c);
void	ft_putnbr(long int nb);
void	ft_putstr(char *str);

#endif
