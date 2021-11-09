/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kezekiel <kezekiel@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:50:02 by kezekiel          #+#    #+#             */
/*   Updated: 2021/11/09 14:11:33 by kezekiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_print	*init_tab(t_print *tab)
{
	tab->len = 0;
	return (tab);
}

static void	conv(char c, t_print *tab)
{
	if (c == 'c')
		ischar(tab);
	else if (c == 's')
		isstr(tab);
	else if (c == 'p')
		isptr(tab);
	else if (c == 'd' || c == 'i')
		isint(tab);
	else if (c == 'u')
		isdecint(tab);
	else if (c == 'X')
		hexup(tab);
	else if (c == 'x')
		hexlow(tab);
	else if (c == '%')
		isperc(tab);
}

int	ft_printf(const char *format, ...)
{
	t_print	*tab;
	int		i;

	tab = malloc(sizeof(t_print));
	if (!tab)
		return (0);
	tab = init_tab(tab);
	i = -1;
	va_start(tab->args, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			if (ft_strchr("cspdiuxX%", format[i + 1]))
				conv(format[i++ + 1], tab);
		}
		else
		{
			ft_putchar(format[i]);
			tab->len++;
		}
	}
	i = tab->len;
	free(tab);
	return (i);
}
