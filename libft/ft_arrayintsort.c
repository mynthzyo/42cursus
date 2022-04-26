/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrayintsort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:23:44 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/19 15:39:08 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_arrayintsort(int *tab, int size)
{
	int	i;
	int	tempo;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i + 1] < tab[i])
		{
			tempo = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tempo;
			if (i > 0)
			i--;
		}
		else
		{
			i++;
		}
	}
}
