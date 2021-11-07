#include "ft_printf.h"

t_print	*init_tab(t_print *tab)
{
	tab->len = 0;
	return (tab);
}

void	conv(char c, t_print *tab)
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
		return (-1);
	tab = init_tab(tab);
	i = 0;
	va_start(tab->args, format);
	while (format[i])
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
		i++;
	}
	i = tab->len;
    free(tab);
	return (i);
}
