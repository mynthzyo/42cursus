/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:45:43 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/19 19:23:48 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	n;
	size_t	ls;
	size_t	ld;

	n = 0;
	ls = ft_strlen(src);
	ld = ft_strlen(dest);
	if (size <= ld || size < 1)
		return (ls + size);
	while (src[n] && (n < (size - ld - 1)))
	{
		dest[ld + n] = src[n];
		n++;
	}
	if (n > 0)
		dest[ld + n] = '\0';
	return (ld + ls);
}
