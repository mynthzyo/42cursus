/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:14:53 by avilchez          #+#    #+#             */
/*   Updated: 2022/05/25 12:13:57 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_put_unsignbr_base(unsigned long int unsignbr, char	*base)
{
	unsigned long int	lenbase;
	int					length;

	length = 0;
	lenbase = ft_strleni(base);
	if (unsignbr >= lenbase)
		length += ft_put_unsignbr_base(unsignbr / lenbase, base);
	length += ft_putchar_len(base[unsignbr % lenbase]);
	return (length);
}

int	ft_format_input(char c, va_list list)
{
	if (c == 'c')
		return (ft_putchar_len(va_arg(list, int)));
	else if (c == 's')
		return (ft_putstr_len(va_arg(list, char *)));
	else if (c == 'p')
		return (write(1, "0x", 2)
			+ ft_put_unsignbr_base(va_arg(list, unsigned long int),
				"0123456789abcdef"));
	else if (c == 'o')
		return (write(1, "0", 1)
			+ ft_put_unsignbr_base(va_arg(list, unsigned long int),
				"01234567"));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_len(va_arg(list, int)));
	else if (c == 'u')
		return (ft_put_unsignbr_base(va_arg(list, unsigned int), "0123456789"));
	else if (c == 'x')
		return (ft_put_unsignbr_base(va_arg(list, unsigned int),
				"0123456789abcdef"));
	else if (c == 'X')
		return (ft_put_unsignbr_base(va_arg(list, unsigned int),
				"0123456789ABCDEF"));
	else if (c == '%')
		return (ft_putchar_len('%'));
	return (ft_putchar_len(c));
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		length;
	va_list	list;

	i = 0;
	length = 0;
	va_start(list, str);
	while (str[i])
	{
		if (str[i] == '%')
			length += ft_format_input(str[++i], list);
		else
			length += ft_putchar_len(str[i]);
		i++;
	}
	va_end(list);
	return (length);
}
