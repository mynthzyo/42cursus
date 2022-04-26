/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba_.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:43:27 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/11 17:49:12 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

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

char	ft_strtchr(const char *s, int c)
{
	char	*rs;
	int		i;

	i = 0;
	rs = (char *)malloc(ft_strlen(s) * sizeof(char));
	while (*s)
	{
		if (*s != c)
			*(rs + i) = *s;
		s++;
		i++;
	}
	if (c == '\0')
		return (*s);
	rs[i] = '\0';
	return (*rs);
}

int	main(void)
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*strsub = NULL;

	*strsub = ft_strtchr(str, 109);
	ft_print_result(strsub);
}
