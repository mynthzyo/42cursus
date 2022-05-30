/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:05:07 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/27 17:42:40 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	cont;
	size_t	i;

	i = 0;
	cont = 0;
	while (src[cont] != '\0')
		cont++;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size -1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (cont);
}

/* int	main(void)
{
	char	a[] = "Bitcoin";
	char	b[] = "EthereumCardano";
	int		n;
	n = 20;
	printf(":%s: || :%s:\n", a, b);
	printf("%zu\n", ft_strlcpy(((void *)0), ((void *)0), 10));
	printf("n = %d\n", n);
	printf(":%s: || :%s:\n", a, b);
	return (0);
} */

/* Da el valor entero del tamaño del SRC, y el DEST toma
los valores del SRC en n - 1 (porque considera el NULL de antemano)
Da el largo del String2 y sobreescribe el String2 en el String1
en 'n' caracteres.*/
