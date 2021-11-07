#include "ft_printf.h"

void	isint(t_print *tab)
{
	int	res;

	res = va_arg(tab->args, long int);
	if (res < 0)
	{
		res = -res;
		tab->len++;
		ft_putchar('-');
	}
	ft_putnbr(res);
	if (res == 0)
		tab->len++;
	while (res != 0)
	{
		res = res / 10;
		tab->len ++;
	}
}

void	isdecint(t_print *tab)
{
	int	res;

	res = va_arg(tab->args, int);
	putdeci(res, tab);
}

void	isperc(t_print *tab)
{
	ft_putchar('%');
	tab->len++;
}
