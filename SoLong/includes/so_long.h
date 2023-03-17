/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:12:19 by avilchez          #+#    #+#             */
/*   Updated: 2022/12/05 13:28:13 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include "get_next_line.h"
# include "../mlx/mlx.h"

typedef struct t_start
{
	int		fd;
	int		heightmap;
	int		widthmap;
	int		playercount;
	int		itemcount;
	int		exitcount;
	int		exit_w;
	int		exit_h;
	int		player_w;
	int		player_h;
	int		counter;
	int		collectables;

	char	**map;

	void	*floor;
	void	*wall;
	void	*player;
	void	*exit_o;
	void	*exit_c;
	void	*collectable;
	void	*mlxpointer;
	void	*winpointer;

}	t_complete;

int		exit_point(t_complete *game);
int		map_reading(t_complete *game, char **argv);
int		controls_working(int command, t_complete *game);
void	adding_in_graphics(t_complete *game);
void	place_images_in_game(t_complete *game);
void	check_errors(t_complete *game);
void	write_move(t_complete *game);
void	place_dungeon(t_complete *game, int height, int width);
int		show_exit(t_complete *game, char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int n);
int		check_way(t_complete *game);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *b, int c, size_t length);

#endif
