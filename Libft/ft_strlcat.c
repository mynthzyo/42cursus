/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:45:43 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/27 17:41:30 by avilchez         ###   ########.fr       */
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

/* int	main(void)
{
	char	dst[] = "AAA";
	char	src[] = "BBBBBB";
	int		n;
	int		res;
	n = 5;
	printf("%s | %s\n", dst, src);
	res = ft_strlcat(dst, src, n);
	//res = strlcat(dst, src, n);
	printf("%d\n", res);
	printf("%s | %s\n", dst, src);
	printf("n = %d\n", n);
} */

/*Si n <= len(DEST) ==> retorna el numero de caracteres del SRC + n
Si n > len(DEST) la funcion original da ERROR, y la funcion creada
da el len(DEST + SRC) y concatena los strs*/
