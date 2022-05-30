/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:20:12 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/27 17:34:36 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len-- > 0)
	{
		*ptr++ = c;
	}
	return (b);
}

/*int	main(void)
{
	char	buffer[BUFSIZ];
	char	bufferset[] = "zyxwvutsrqponmlkjihgfedcba";
	char	cpybufferset[] = "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjj";
	const char *str;

	ft_memset(buffer, 'r', 15);
	printf("%s\n", buffer);
	memset(buffer, 'n', 15);
	printf("%s\n", buffer);
	puts("Buffer initialized");
	printf("El BUFSIZ buffer es de %d bytes\n", BUFSIZ);
	return (0);
}*/