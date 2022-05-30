/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:55:47 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/27 17:33:08 by avilchez         ###   ########.fr       */
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

/*int	main(void)
{
	char	str1[] = "Bitcoin";
	printf("dest: %s\n", str1 + 2);
	printf("src: %s\n", str1);
	ft_memmove(str1 + 2, str1, 3);
	//memcpy(str1, str2, 3);
	printf("dest final: %s\n", str1);
}
//El memcopy no funciona cuando el dest y el src toman
el mismo string y el dest va despues del src
*/
