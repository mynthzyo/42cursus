/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:34:31 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/19 13:15:47 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	size;
	int		dif;

	i = 0;
	if (ft_strlen(s1) < ft_strlen(s2))
	{
		size = ft_strlen(s2);
	}
	else
	{
		size = ft_strlen(s1);
	}
	while (i < n && i < size)
	{
		if (s1[i] != s2[i])
		{
			dif = ((unsigned char)s1[i] - (unsigned char)s2[i]);
			return (dif);
		}
		i++;
	}
	return (0);
}
