/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:51:29 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/04 11:51:40 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int letter)
{
	if (!(letter >= 32 && letter <= 126))
	{
		return (0);
	}
	return (1);
}
