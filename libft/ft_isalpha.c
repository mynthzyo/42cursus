/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:48:43 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/04 11:48:49 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int letter)
{
	if ((letter < 'A' || letter > 'Z') && (letter < 'a' || letter > 'z'))
	{
		return (0);
	}
	return (1);
}
