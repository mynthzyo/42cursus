/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:11:10 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/27 17:38:07 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*result;

	len = ft_strlen(s1) + 1;
	result = (char *)malloc(len);
	if (result == (char *) 0)
		return ((char *) 0);
	return ((char *) ft_memcpy (result, s1, len));
}

/* int	main(void)
{
	char	*mine;
	char	*theirs;
	char	*example;
	example = "hello";
	mine = ft_strdup(example);
	theirs = strdup(example);
	printf(":%s:\n:%s:\n", mine, theirs);
	return (0);
} */

//en una nueva variable retorna el mismo string
