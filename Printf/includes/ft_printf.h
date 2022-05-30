/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:50:43 by avilchez          #+#    #+#             */
/*   Updated: 2022/05/25 12:22:43 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
/*
** -.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-
**                              LIBRARYs
*/
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
/*
** -.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-
**                              MAIN FUNCTION PROTOTYPES
*/
int	ft_printf(const char *str, ...);
int	ft_put_unsignbr_base(unsigned long int unsignbr, char	*base);
int	ft_format_input(char c, va_list list);
/*
** -.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-
**                              ADDITIONAL FUNCTION PROTOTYPES
*/
int	ft_strleni(const char *str);
int	ft_putchar_len(char c);
int	ft_putstr_len(char *str);
int	ft_putnbr_len(int nb);
int	ft_putnull(void);

#endif
