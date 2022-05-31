/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:39:10 by avilchez          #+#    #+#             */
/*   Updated: 2022/05/31 13:47:03 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/*
** -.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-
**                              LIBRARYs
*/
# include <stdio.h>
# include <stddef.h>
# include <fcntl.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <errno.h>
/*
** -.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-
**                              MAIN FUNCTION PROTOTYPES
*/
char		*get_next_line(int fd);
/*
** -.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-
**                              ADDITIONAL FUNCTION PROTOTYPES
*/
char		*ft_strchr(const char *s, int c);
size_t		ft_strlen(const char *str);
char		*ft_strjoin(const char *s1, const char *s2);

#endif
