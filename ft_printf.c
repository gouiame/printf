/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:52:26 by cgouiame          #+#    #+#             */
/*   Updated: 2022/11/23 16:28:26 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft(va_list arg, char c)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(arg, int));
	else if (c == 'c')
		ft_putchar(va_arg(arg, int));
	else if (c == 's')
		ft_putstr(va_arg(arg, char *));
	else if (c == '%')
		ft_putchar('%');
	else if (c == 'u')
		ft_putnbr_unsigned(va_arg(arg, unsigned int));
	else if (c == 'x')
		ft_putnbr_hexa(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		ft_putnbr_hexa(va_arg(arg, unsigned int), "0123456789ABCDEF");
	else if (c == 'p')
	{
		ft_putstr("0x");
		ft_putnbr_hexa(va_arg(arg, size_t), "0123456789abcdef");
	}
	else
		ft_putchar(c);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	args;

	i = 0;
	g_len = 0;
	va_start (args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			ft(args, s[i]);
		}
		else
			ft_putchar(s[i]);
		if (s[i] == '\0')
			break ;
		i++;
	}
	va_end(args);
	return (g_len);
}
