/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas_mem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:51:28 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/11 12:06:17 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>

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

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char	*firsts;
	char	*firstd;
	char	*lasts;
	char	*lastd;

	firsts = (char *) src;
	firstd = (char *) dest;
	lasts = (char *)src + (len - 1);
	lastd = (char *)dest + (len - 1);
	if (dest < src)
	{
		while (len--)
			*firstd++ = *firsts++;
	}
	else
	{
		while (len--)
		{
			*lastd-- = *lasts--;
			printf("Pasando el Last: %s\n", lastd);
		}
	}
	return (dest);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*rs;
	char	*cs;
	size_t	len;

	rs = NULL;
	len = 0;
	cs = (char *) s;
	while (*cs)
	{
		if (len == n)
			break ;
		if (*cs == c)
		{
			//rs = (char *)cs;
			return (cs);
		}
		cs++;
		len++;
	}
	if (c == '\0')
		return ((char *)cs);
	return (rs);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	ft_memcpy((char *)src, dst, len);
	return (dst);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1 = (const unsigned char*)s1;
	const unsigned char	*str2 = (const unsigned char*)s2;

	while (n-- > 0)
	{
		if (*str1++ != *str2++)
		{
			if (str1[-1] < str2[-1])
				return (-1);
			else
				return (1);
		}
	}
	return (0);
}

int	main(void)
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

	
	ft_memcpy(cpybufferset, bufferset, 14);
	printf("%s\n", cpybufferset);
	memcpy(cpybufferset, bufferset, 14);
	printf("%s\n", cpybufferset);

	ft_memchr(bufferset, 'V', 10);
	printf("%s\n", bufferset);
	memchr(bufferset, 'V', 10);
	printf("%s\n", bufferset);

	str = ft_memchr("bonjour", 'b', 7);
	printf("%s\n", str);
	
	printf("%d\n", ft_memcmp(bufferset, cpybufferset, 5));
	printf("%d\n", memcmp(bufferset, cpybufferset, 5));
	return (0);
}

/*int	main(void)
{
	char	*key;
	int		len;

	len = 10;
	key = ft_calloc(len + 1, sizeof(char));
	if (key == NULL)
	{
		fprintf(stderr, "Memory allocation error\n");
		exit(1);
	}
}*/