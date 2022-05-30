/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:48:43 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/27 17:27:21 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int letter)
{
	if ((letter < 'A' || letter > 'Z') && (letter < 'a' || letter > 'z'))
	{
		return (0);
	}
	return (1);
}

/*int	main(void)
{
	int	numero;

	numero = -01;
	while (numero < 0201)
	{
		printf("%o\t", numero);
		if (ft_isalfa(numero))
		{
			printf("Es alfan");
		}
		else
		{
			printf("No es alfa");
		}
		printf("\t");
		if (isalfa(numero))
		{
			printf("Es alfa");
		}
		else
		{
			printf("No es alfa");
		}
		printf("\tLa letra es %c\n", numero);
	numero ++;
	}
	return (0);
}*/
