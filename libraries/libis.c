/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libis.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:05:54 by avilchez          #+#    #+#             */
/*   Updated: 2022/03/29 13:27:23 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int letter)
{
	if (letter < 0 || letter > 127)
	{
		return (0);
	}
	return (1);
}

int	ft_isalpha(int letter)
{
	if ((letter < 'A' || letter > 'Z') && (letter < 'a' || letter > 'z'))
	{
		return (0);
	}
	return (1);
}

int	ft_isdigit(int letter)
{
	if (letter < '0' || letter > '9')
	{
		return (0);
	}
	return (1);
}

int	ft_isalnum(int letter)
{
	if ((letter < '0' || letter > '9')
		&& (letter < 'A' || letter > 'Z')
		&& (letter < 'a' || letter > 'z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	ft_isprint(int letter)
{
	if (!(letter >= 32 && letter <= 126))
	{
		return (0);
	}
	return (1);
}
