/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kezekiel <kezekiel@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:50:08 by kezekiel          #+#    #+#             */
/*   Updated: 2021/11/09 14:35:42 by kezekiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	isptr(t_print *tab)
{
	unsigned long	res;

	res = va_arg(tab->args, unsigned long);
	ft_putstr("0x");
	tab->len += 2;
	putptr(res, tab);
}

void	hexlow(t_print *tab)
{
	int	res;

	res = va_arg(tab->args, unsigned int);
	puthexlow(res, tab);
}

void	hexup(t_print *tab)
{
	int	res;

	res = va_arg(tab->args, unsigned int);
	puthexup(res, tab);
}
