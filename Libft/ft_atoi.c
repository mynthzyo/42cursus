/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:50:06 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/27 17:15:17 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;
	int	i;

	sign = 0;
	num = 0;
	i = 0;
	while (str[i] != '\0' && (str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\t' || str[i] == '\v' || str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	if (sign == 1)
		num = num * -1;
	return (num);
}

/* int	main(int ac, char **av)
{
	int	mine;
	int	theirs;
	if (ac == 2)
	{
		mine = ft_atoi(av[1]);
		theirs = atoi(av[1]);
		printf("mine: %d | theirs: %d\n", mine, theirs);
	}
	return (0);
} */
