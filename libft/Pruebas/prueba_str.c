/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:54:51 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/04 20:49:33 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	char	*p;

	p = dest;
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	cont;
	size_t	i;

	i = 0;
	cont = 0;
	while (src[cont] != '\0')
		cont++;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size -1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (cont);
}

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
	dest[ld + n] = '\0';
	return (ld + ls);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*rs;

	rs = NULL;
	while (*s)
	{
		if (*s == c)
		{
			rs = (char *)s;
		}
		s++;
	}
	return (rs);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	size;
	int		dif;

	i = 0;
	if (ft_strlen(s1) < ft_strlen(s2))
	{
		size = ft_strlen(s2);
	}
	else
	{
		size = ft_strlen(s1);
	}
	while (i < n && i < size)
	{
		if (s1[i] != s2[i])
		{
			dif = ((unsigned char)s1[i] - (unsigned char)s2[i]);
			return (dif);
		}
		i++;
	}
	return (0);
}

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

/*
int	main(void)
{
	char *text;
    size_t origin;
    size_t mine;

	text = "";
    origin = strlen (text);
    mine = ft_strlen (text);
	printf("tamaño or: %zu\n", origin);
    printf("tamaño ft: %zu\n", mine);
	return (0);
}*/

/*int	main(void)
{
	char src[] = "Acupuntura Oriental";
    char dst1[100];
    char dst2[100];
    size_t origin;
    size_t mine;
    size_t test;

    test = 13;
    origin = strlcpy (dst1, src, test);
    mine = ft_strlcpy (dst2, src, test);
	printf("texto original: %s\t texto copiado: %s\t tamaño or: %zu\n", src, dst1, origin);
    printf("texto original: %s\t texto copiado: %s\t tamaño or: %zu\n", src, dst2, mine);
	return (0);
}*/

int main(void)
{
    char first[] = "lorem ipsum dolor sit amet";
    char last[] = "rrrrrrrrrrrrrrr";
    int r;
    int size = 5;
    char buffer[size];

    char src[] = "lorem ipsum dolor sit amet";
    char dst[] = "rrrrrrrrrrrrrrr";
    int l;
    char tmp[size];
    
    // ORIGINAL
    strcpy(buffer, first);
    r = strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    //VERSION FT
    ft_strcpy(tmp,src);
    l = ft_strlcat(tmp,dst,size);

    puts(tmp);
    printf("Valor Retornado: %d\n",l);
    if( l > size )
        puts("Truncado");
    else
        puts("Copiado");

    return(0);
}

/*int	main(void)
{
	char	text[] = "aeiouAEIOUIahoraque";
	char	letra = '\0';
	char	*pos;
	char	*pos2;

	pos = strchr(text, letra);
	if (pos)
		printf("'%s' contiene en: %s\n", text, pos);
	else
		printf("'%s' no contiene %c\n", text, letra);

	pos2 = ft_strchr(text, letra);
	if (pos2)
		printf("'%s' contiene en: %s\n", text, pos2);
	else
		printf("'%s' no contiene %c\n", text, letra);
	return (0);
}*/

/*int	main(void)
{
	char	user_A[] = "test\200";
	char	user_B[] = "test\0";
	size_t	sz;

	sz = 7;
	if (ft_strncmp(user_A, user_B, sz) == 0)
	{
		printf("Las cadenas son iguales. \n");
	}
	else
	{
		printf("NO son iguales. \nSu valor es %d\n", ft_strncmp(user_A, user_B, sz));
	}

	if (strncmp(user_A, user_B, sz) == 0)
	{
		printf("Las cadenas son iguales. \n");
	}
	else
	{
		printf("NO son iguales. \nSu valor es %d", strncmp(user_A, user_B, sz));
	}
}*/

/*int	main(void)
{
	char	user_A[100] = "lorem ipsum dolor sit amet";
	char	user_B[100] = "ipsumm";
	size_t	sz = 30;

	printf("BUSCAR %s\n", user_B);
	//printf("EN %s\n", user_A);
	write (1, "EN ", 3);
	write (1, &user_A, sz);
	write (1, "\n", 1);

	printf("RESULTADO %s\n", ft_strnstr(user_A, user_B, sz));

	printf("STRSTR %s", strnstr(user_A, user_B, sz));
}*/
