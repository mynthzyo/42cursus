/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebadigi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:19:01 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/12 15:22:58 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h> 

int	ft_digitos(int cnb)
{
	int	cociente;
	int	divisor;
	int	contador;

	cociente = 0;
	divisor = 1;
	contador = 0;
	if (cnb < 0)
		cnb = -cnb;
	if (cnb == -2147483648)
		return (10);
	while (cociente != 1)
	{
		contador++;
		divisor = divisor * 10;
		cociente = cnb / divisor;
		if (cociente < 1)
			cociente = 1;
		if (cociente == 1)
			contador++;
		if (cnb < 10)
			return (1);
	}
	return (contador - 1);
}

int	main(void)
{
	int	countn;
	int	num;

	num = -2147483648;
	countn = ft_digitos(num);
	printf ("numero de digitos: %d", countn);
}
