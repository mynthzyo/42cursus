/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:20:47 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/27 17:17:05 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset (s, 0, n);
}

/* int	main(void)
{
	char	str[] = "bitcoin";
	int		n;
	n = 3;
	printf("%s\n", str);
	ft_bzero(str +2, n);
	printf("%s\n", str);
	bzero(str + 2, n);
	printf("%s\n", str);
} */
