/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:36:22 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/29 13:13:29 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digitos(int num)
{
	int		numlen;

	numlen = 0;
	if (num == 0)
	{
		numlen = 1;
	}
	if (num < 0)
	{
		numlen++;
		num = -1 * num;
	}
	while (num != 0)
	{
		num = num / 10;
		numlen++;
	}
	return (numlen);
}

char	*ft_itoa(int n)
{
	int		nlen;
	char	*s;
	long	num;

	nlen = ft_digitos(n);
	num = (long)n;
	s = malloc(nlen + 1);
	if (!(s))
		return (NULL);
	s[nlen] = '\0';
	if (num == 0)
		s[0] = '0';
	if (num < 0)
	{
		s[0] = '-';
		num = -num;
	}
	nlen--;
	while (nlen >= 0 && num != 0)
	{
		s[nlen] = num % 10 + '0';
		num = num / 10;
		nlen--;
	}
	return (s);
}

/*int	main(void)
{
	char	*countn;
	int		num;

	num = -2147483648;
	countn = ft_itoa(num);
	printf ("numero de digitos: %s", countn);
}*/
