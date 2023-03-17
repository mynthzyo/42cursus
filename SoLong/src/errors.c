/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:33:01 by avilchez          #+#    #+#             */
/*   Updated: 2022/12/09 12:48:10 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static int	if_walls(t_complete *game)
{
	int	height;
	int	width;

	height = 0;
	width = game->widthmap;
	while (height < game->heightmap)
	{
		if (!(game->map[height][0] == '1'
			&& game->map[height][width - 1] == '1'))
			show_exit(game, "ERROR: This map is missing the walls\n");
		height++;
	}
	height = game->heightmap;
	width = 0;
	while (width < game->widthmap)
	{
		if (!(game->map[0][width] == '1'
			&& game->map[height - 1][width] == '1'))
			show_exit(game, "ERROR: This map is missing the walls\n");
		width++;
	}
	return (1);
}

static void	count_checker(t_complete *game, int height, int width)
{
	if (game->map[height][width] != '1' &&
		game->map[height][width] != '0' &&
		game->map[height][width] != 'P' &&
		game->map[height][width] != 'E' &&
		game->map[height][width] != 'C' &&
		game->map[height][width] != '\n')
	{
		show_exit(game, "ERROR: There is an invalid element in the map\n");
	}
	if (game->map[height][width] == 'C')
			game->itemcount++;
	if (game->map[height][width] == 'P')
	{
			game->playercount++;
			game->player_h = height;
			game->player_w = width;
	}
	if (game->map[height][width] == 'E')
			game->exitcount++;
}

void	character_valid(t_complete *game)
{
	int	height;
	int	width;

	height = 0;
	while (height < game->heightmap - 1)
	{
		width = 0;
		while (width <= game->widthmap)
		{
			count_checker(game, height, width);
			width++;
		}
		height++;
	}
	if (game->playercount != 1)
		show_exit(game, "ERROR: This game is not a multiplayer game\n");
	if (game->itemcount < 1)
		show_exit(game, "ERROR: Not enought items to collect\n");
	if (game->exitcount != 1)
		show_exit(game, "ERROR: Number of exits incorrect\n");
}

void	check_errors(t_complete *game)
{
	if_walls(game);
	character_valid(game);
	check_way(game);
}
