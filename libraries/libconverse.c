/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libconverse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:47:20 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/12 16:49:38 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	dec_oct(int dec)
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

int	ft_atoi(char *str)
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
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign + 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	if (sign % 2 != 0)
		num = num * -1;
	return (num);
}

int	ft_digitos(int cnb)
{
	int	cociente;
	int	divisor;
	int	contador;

	cociente = 0;
	divisor = 1;
	contador = 0;
	if (cnb < 0)
		cnb = -cnb;
	if (cnb == -2147483648)
		return (11);
	while (cociente != 1)
	{
		contador++;
		divisor = divisor * 10;
		cociente = cnb / divisor;
		if (cociente < 1)
			cociente = 1;
		if (cociente == 1)
			contador++;
		if (cnb < 10)
			return (1);
	}
	return (contador - 1);
}

char	*ft_gestiontopdown(void)
{
	char	*numfeo;

	numfeo = (char *)malloc(12 * sizeof(char));
	numfeo[0] = '-';
	numfeo[1] = '2';
	numfeo[2] = '1';
	numfeo[3] = '4';
	numfeo[4] = '7';
	numfeo[5] = '4';
	numfeo[6] = '8';
	numfeo[7] = '3';
	numfeo[8] = '6';
	numfeo[9] = '4';
	numfeo[10] = '8';
	numfeo[11] = '\0';
	return (numfeo);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		digi;

	digi = ft_digitos(n);
	if (!(num = malloc(digi + 1)))
		return (NULL);
	if (n == -2147483648)
		return (ft_gestiontopdown());
	if (n < 0)
	{
		num[0] = '-';
		num[digi + 1] = '\0';
		n = -n;
		while (digi > 0)
		{
			num[digi] = n % 10 + '0';
			n = n / 10;
			digi--;
		}
	}
	else
	{
		num[digi] = '\0';
		while (digi--)
		{
			num[digi] = n % 10 + '0';
			n = n / 10;
		}
	}
	return (num);
}
