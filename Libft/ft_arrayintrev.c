/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrayintrev.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:23:44 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/19 15:40:35 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_arrayintrev(int *tab, int size)
{
	int	i;
	int	tempo;
	int	numit;

	i = 0;
	numit = size / 2;
	while (i < numit)
	{
		tempo = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tempo;
		i++;
	}
}
