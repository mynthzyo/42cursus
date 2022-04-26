/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:56:08 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/19 13:12:37 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		size;
	int		i;

	size = ft_strlen(s);
	i = 0;
	if (s != NULL && f != NULL)
	{
		while (i < size)
		{
			(*f)(i, s);
			s++;
			i++;
		}
	}
}
