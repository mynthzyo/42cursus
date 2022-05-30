/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:33:14 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/19 16:19:27 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	mark;

	i = 0;
	mark = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if ((str[i] < '0' || str[i] > '9') && (str[i] < 'a' || str[i] > 'z'))
			mark = 1;
		if (str[i] >= '0' && str[i] <= '9')
			mark = 0;
		if (str[i] >= 'a' && str[i] <= 'z' && mark == 1)
		{
			str[i] = str[i] - 32;
			mark = 0;
		}
		i++;
	}
	return (str);
}
