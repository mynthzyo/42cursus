/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:44:52 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/19 17:53:15 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprime(int numero)
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
