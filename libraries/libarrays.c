/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libarrays.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:23:44 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/05 11:57:14 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
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

void	ft_sort_int_tab(int *tab, int size)
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