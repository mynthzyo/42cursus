/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:27:41 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/27 17:39:08 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*result;
	size_t			size;
	unsigned int	i;

	i = 0;
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = (char *)malloc(size * sizeof(char));
	if (!result)
		return (0);
	while (*s1)
	{
		result[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		result[i] = *s2;
		s2++;
		i++;
	}	
	result[i] = '\0';
	return (result);
}

/*int	main(void)
{
	char	a[] = "Bitcoin";
	char	b[] = "Ethereum";
	char	*res;
	res = ft_strjoin(a, b);
	printf(":%s:", res);
	return (0);
}*/

//en una nueva variable se concatena los strings
