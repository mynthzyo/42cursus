/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:45:31 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/26 13:13:41 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}

/*void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*rs;
	char	*cs;
	size_t	len;

	rs = NULL;
	len = 0;
	cs = (char *) s;
	if (n == 0)
		return (rs);
	while (*cs)
	{
		if (len == n)
			break ;
		if (*cs == c)
		{
			rs = (char *)cs;
			len = n - 1;
		}
		cs++;
		len++;
	}
	if (c == '\0')
		return ((char *)cs);
	return (rs);
}*/
