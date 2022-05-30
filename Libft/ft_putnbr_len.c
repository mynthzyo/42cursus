/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:03:42 by avilchez          #+#    #+#             */
/*   Updated: 2022/05/25 12:03:46 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
