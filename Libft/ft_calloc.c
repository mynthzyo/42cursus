/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:33:32 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/27 17:17:37 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;

	if (nelem == 0 || elsize == 0)
	{
		nelem = 1;
		elsize = 0;
	}
	ptr = malloc (nelem * elsize);
	if (ptr)
		ft_bzero(ptr, nelem * elsize);
	return (ptr);
}

/* void	imprimirvector(int v[], int n)
{
	int	i;
	i = 0;
	while (i < n)
	{
		printf("%d", v[i]);
		i++;
	}
	printf("\n");
}
int	main(void)
{
	int	n;
	int	*p;
	int	*q;
	n = 10;
	p = malloc((n) * sizeof(int));
	imprimirvector(p, n);
	q = ft_calloc(n, sizeof(int));
	imprimirvector(q, n);
} */
