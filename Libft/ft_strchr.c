/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:20:44 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/27 17:37:42 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	d;

	d = c;
	while (*s != '\0' && d != *s)
		s++;
	if (d == *s)
		return ((char *)s);
	return (0);
}

/*char	*ft_strchr(const char *s, int c)
{
	char	d;

	d = c;
	while (*s)
	{
		if (*s == d)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}*/

/*int	main(void)
{
	char	a[] = "HolaHolaXX";
	char	*b	= NULL;
	b = ft_strchr(a, 'a');
	printf("%s || %s", a, b);
	return (0);
}*/

/*retorna el string desde el caracter que coincide con 'c' (si el c tiene
varios caracteres solo considera el primero)*/
