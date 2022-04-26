/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba_is.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:23:27 by avilchez          #+#    #+#             */
/*   Updated: 2022/03/29 16:08:37 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int letter)
{
	if ((letter < '0' || letter > '9')
		&& (letter < 'A' || letter > 'Z')
		&& (letter < 'a' || letter > 'z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/*int	ft_isdigit(int letter)
{
	if (letter < '0' || letter > '9')
	{
		return (0);
	}
	return (1);
}*/

/*int	ft_isalpha(int letter)
{
	if ((letter < 'A' || letter > 'Z') && (letter < 'a' || letter > 'z'))
	{
		return (0);
	}
	return (1);
}*/

/*int	ft_isascii(int letter)
{
	if (letter < 0 || letter > 127)
	{
		return (0);
	}
	return (1);
}*/

/*int	ft_isprint(int letter)
{
	if (!(letter >= 32 && letter <= 126))
	{
		return (0);
	}
	return (1);
}*/

int	main(void)
{
	int	numero;

	numero = -01;
	while (numero < 0201)
	{
		printf("%o\t", numero);
		if (ft_isalnum(numero))
		{
			printf("Es alfanum");
		}
		else
		{
			printf("No es alfanum");
		}
		printf("\t");
		if (isalnum(numero))
		{
			printf("Es alfanumerico");
		}
		else
		{
			printf("No es alfanumerico");
		}
		printf("\tLa letra es %c\n", numero);
	numero ++;
	}
	return (0);
}
