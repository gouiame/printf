/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:51:27 by cgouiame          #+#    #+#             */
/*   Updated: 2022/11/24 14:46:25 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
// # include <stdio.h>

int		g_len;
int		ft_printf(const char *str, ...);
void	ft_putchar(int c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
void	ft_putnbr_unsigned(unsigned int n);
void	ft_putnbr_hexa(size_t n, char *base);

#endif
