/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:04:23 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/26 12:33:27 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*rs;
	char	d;

	rs = NULL;
	d = c;
	while (*s)
	{
		if (*s == d)
		{
			rs = (char *)s;
		}
		s++;
	}
	if (d == '\0')
		return ((char *)s);
	return (rs);
}
