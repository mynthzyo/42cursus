/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libnum.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:44:52 by avilchez          #+#    #+#             */
/*   Updated: 2022/03/29 13:30:08 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	digitos(int cnb)
{
	int	cociente;
	int	divisor;
	int	contador;

	cociente = 0;
	divisor = 1;
	contador = 0;
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
		{
			contador = 1;
			return (contador);
		}
	}
	return (contador);
}

int	isprime(int numero)
{
	int	i;

	i = 2;
	if (numero < 2)
		return (0);
	while (i < numero)
	{
		if (numero % i == 0)
			return (0);
		i++;
	}
	return (1);
}
