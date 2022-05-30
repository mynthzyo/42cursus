/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:49:59 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/27 17:25:10 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*int	main(void)
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
}*/
