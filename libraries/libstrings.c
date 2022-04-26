/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libstrings.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:02:41 by avilchez          #+#    #+#             */
/*   Updated: 2022/03/29 13:37:14 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strstr(char	*str, char	*to_find)
{
	int		i;
	int		j;
	int		n;

	i = 0;
	j = 0;
	n = 0;
	while (to_find[n])
		n++;
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && to_find[j])
			{
				j++;
			}
			if (j == n)
				return (i + j);
		}
		j = 0;
		i++;
	}
	return (n);
}

char	*ft_strstr(char	*str, char	*to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	size;
	int	dif;

	i = 0;
	if (ft_strlen(s1) < ft_strlen(s2))
	{
		size = ft_strlen(s2);
	}
	else
	{
		size = ft_strlen(s1);
	}
	while (i < size)
	{
		if (s1[i] != s2[i])
		{
			dif = (s1[i] - s2[i]);
			return (dif);
		}
		i++;
	}
	return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	size;
	int				dif;

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
			dif = (s1[i] - s2[i]);
			return (dif);
		}
		i++;
	}
	return (0);
}

char	*ft_strcat(char	*dest, char *src)
{
	int	size;
	int	i;

	size = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[size] = src[i];
		size++;
		i++;
	}
	dest[size] = '\0';
	return (dest);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				size;
	unsigned int	i;

	size = ft_strlen(dest);
	i = 0;
	while (i < nb && src[i])
	{
		dest[size] = src[i];
		size++;
		i++;
	}
	dest[size] = '\0';
	return (dest);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	ls;
	unsigned int	ld;

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
