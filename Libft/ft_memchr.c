/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:45:31 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/27 17:31:53 by avilchez         ###   ########.fr       */
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

/* int	main(void)
{
	char	str1[] = "Bitcoinnnnnnnn";
	char	*str2;
	str2 = ft_memchr(str1, 't', 5);
	printf("%s || %s\n", str1, str2);
	printf("<%c>", 2 + 256);
	return (0);
} */
