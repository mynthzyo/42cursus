/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:52:21 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/19 17:19:44 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int c)
{
	if (c == 32 || c == 10 || c == 9 || c == 11
		|| c == 12 || c == 13)
		return (1);
	return (0);
}