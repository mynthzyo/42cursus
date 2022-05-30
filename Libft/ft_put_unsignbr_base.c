/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsignbr_base.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:18:46 by avilchez          #+#    #+#             */
/*   Updated: 2022/05/25 12:18:49 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
