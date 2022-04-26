/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:36:22 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/19 15:16:40 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
