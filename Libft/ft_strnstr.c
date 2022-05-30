/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:52:42 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/27 17:44:52 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*str, const char	*to_find, size_t sz)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (i < sz && str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] && (j + i < sz))
		{
			if (to_find[j + 1] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char	str1[] = "01: one 02: two 03: three";
	char	str2[] = "02";
	int		n;
	n = 4;
	printf("%s | %s\n", str1, str2);
	printf("%s\n", ft_strnstr(str1, str2, n));
	//printf("%s\n", strnstr(str1, str2, n));
} */
