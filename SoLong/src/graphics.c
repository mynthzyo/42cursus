/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphics.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:06:51 by avilchez          #+#    #+#             */
/*   Updated: 2022/12/09 11:49:54 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	place_player(t_complete *game, int height, int width)
{
	if (game->map[height][width] == 'P')
	{
		mlx_put_image_to_window(game->mlxpointer,
			game->winpointer, game->player, width * 40, height * 40);
		game->player_h = height;
		game->player_w = width;
	}
}

void	place_collectable(t_complete *game, int height, int width)
{
	if (game->map[height][width] == 'C')
	{
		mlx_put_image_to_window(game->mlxpointer,
			game->winpointer, game->collectable, width * 40, height * 40);
		game->collectables++;
	}
}

void	place_dungeon(t_complete *game, int height, int width)
{
	if (game->map[height][width] == 'E')
	{
		mlx_put_image_to_window(game->mlxpointer,
			game->winpointer, game->exit_c, width * 40, height * 40);
		game->exit_h = height;
		game->exit_w = width;
	}
	if (game->map[height][width] == 'O')
		mlx_put_image_to_window(game->mlxpointer,
			game->winpointer, game->exit_o, width * 40, height * 40);
	if (game->map[height][width] == '0')
		mlx_put_image_to_window(game->mlxpointer,
			game->winpointer, game->floor, width * 40, height * 40);
	if (game->map[height][width] == '1')
		mlx_put_image_to_window(game->mlxpointer,
			game->winpointer, game->wall, width * 40, height * 40);
}

void	place_images_in_game(t_complete *game)
{
	int	i;
	int	j;

	game->floor = mlx_xpm_file_to_image(game->mlxpointer,
			"images/floor.xpm", &i, &j);
	game->wall = mlx_xpm_file_to_image(game->mlxpointer,
			"images/wall.xpm", &i, &j);
	game->player = mlx_xpm_file_to_image(game->mlxpointer,
			"images/floor_zombie_down.xpm", &i, &j);
	game->exit_c = mlx_xpm_file_to_image(game->mlxpointer,
			"images/exit_close.xpm", &i, &j);
	game->exit_o = mlx_xpm_file_to_image(game->mlxpointer,
			"images/exit_open.xpm", &i, &j);
	game->collectable = mlx_xpm_file_to_image(game->mlxpointer,
			"images/floor_brain.xpm", &i, &j);
}

void	adding_in_graphics(t_complete *game)
{
	int	height;
	int	width;

	game->collectables = 0;
	height = 0;
	while (height < game->heightmap)
	{
		width = 0;
		while (game->map[height][width])
		{
			place_collectable(game, height, width);
			place_player(game, height, width);
			place_dungeon(game, height, width);
			width++;
		}
		height++;
	}
}
