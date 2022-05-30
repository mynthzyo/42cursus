/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libprintf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:25:35 by avilchez          #+#    #+#             */
/*   Updated: 2022/05/25 12:20:02 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putchar_len(char c)
{
	return (write(1, &c, 1));
}

int	ft_putnull(void)
{
	return (write(1, "(null)", 6));
}

int	ft_putstr_len(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putnull());
	while (str[i])
		ft_putchar_len(str[i++]);
	return (i);
}

int	ft_putnbr_len(int nb)
{
	long int	aux;
	int			length;

	length = 0;
	aux = nb;
	if (aux < 0)
	{
		length += ft_putchar_len('-');
		aux = aux * (-1);
	}
	if (aux > 9)
	{
		length += ft_putnbr_len(aux / 10);
		length += ft_putchar_len(aux % 10 + '0');
	}
	else
		length += ft_putchar_len(aux + '0');
	return (length);
}

int	ft_strleni(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
