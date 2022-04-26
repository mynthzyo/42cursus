/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:55:47 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/26 12:12:15 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
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
