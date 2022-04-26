/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:54:17 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/26 12:09:11 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char	*firsts;
	char	*firstd;
	char	*lasts;
	char	*lastd;

	firsts = (char *) src;
	firstd = (char *) dest;
	lasts = (char *)src + (len - 1);
	lastd = (char *)dest + (len - 1);
	if (dest == NULL & src == NULL)
		return (NULL);
	if (dest < src)
	{
		while (len--)
			*firstd++ = *firsts++;
	}
	else
	{
		while (len--)
			*lastd-- = *lasts--;
	}
	return (dest);
}
