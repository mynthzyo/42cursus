/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libis2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:05:54 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/19 13:34:07 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
		{	
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{	
			return (0);
		}
		i++;
	}
	return (1);
}
