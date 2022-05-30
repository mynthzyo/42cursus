/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:36:22 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/19 15:14:29 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digitos(int num)
{
	int		numlen;

	numlen = 0;
	if (num == 0)
	{
		numlen = 1;
	}
	if (num < 0)
	{
		numlen++;
		num = -1 * num;
	}
	while (num != 0)
	{
		num = num / 10;
		numlen++;
	}
	return (numlen);
}
