/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kezekiel <kezekiel@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:49:54 by kezekiel          #+#    #+#             */
/*   Updated: 2021/11/09 13:49:58 by kezekiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	putdeci(unsigned int i, t_print *tab)
{
	char	*base;

	base = "0123456789";
	if (i >= 10)
	{
		putdeci(i / 10, tab);
		putdeci(i % 10, tab);
	}
	else
	{
		ft_putchar(base[i]);
		tab->len++;
	}
}

void	puthexlow(unsigned int i, t_print *tab)
{
	char	*base;

	base = "0123456789abcdef";
	if (i >= 16)
	{
		puthexlow(i / 16, tab);
		puthexlow(i % 16, tab);
	}
	else
	{
		ft_putchar(base[i]);
		tab->len++;
	}
}

void	puthexup(unsigned int i, t_print *tab)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (i >= 16)
	{
		puthexup(i / 16, tab);
		puthexup(i % 16, tab);
	}
	else
	{
		ft_putchar(base[i]);
		tab->len++;
	}
}

void	putptr(unsigned long int i, t_print *tab)
{
	char	*base;

	base = "0123456789abcdef";
	if (i >= 16)
	{
		putptr(i / 16, tab);
		putptr(i % 16, tab);
	}
	else
	{
		ft_putchar(base[i]);
		tab->len++;
	}
}
