/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dectooct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:47:20 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/19 15:35:35 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	dectooct(int dec)
{
	int	rem;
	int	i;
	int	oct;

	i = 1;
	oct = 0;
	if (dec < 8)
		return (dec);
	while (dec != 0)
	{
		rem = dec % 8;
		dec = dec / 8;
		oct = oct + (rem * i);
		i = i * 10;
	}
	return (oct);
}
