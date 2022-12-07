/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:31:43 by cgouiame          #+#    #+#             */
/*   Updated: 2022/11/23 14:37:42 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int n)
{
	unsigned int	nbr;

	nbr = n;
	if (nbr >= 10)
	{
		ft_putnbr_unsigned(nbr / 10);
		ft_putnbr_unsigned(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}
