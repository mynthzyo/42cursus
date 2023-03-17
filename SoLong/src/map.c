/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:34:01 by prossi            #+#    #+#             */
/*   Updated: 2022/12/09 12:49:58 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	search_way(t_complete *game, char **vmap, int h, int w)
{
	static int	items = 0;
	static int	exit = 0;

	if (game->map[h][w] == 'E')
		exit++;
	if (exit == 1 && items == game->itemcount)
	{
		return (1);
	}
	else
	{
		if (vmap[h][w] != '1' && vmap[h][w] != 'X' && vmap[h][w] != 'E')
		{
			if (game->map[h][w] == 'C')
				items++;
			vmap[h][w] = 'X';
			if (search_way(game, vmap, h - 1, w)
				|| search_way(game, vmap, h + 1, w)
				|| search_way(game, vmap, h, w - 1)
				|| search_way(game, vmap, h, w + 1))
				return (1);
		}
	}
	return (0);
}

int	check_way(t_complete *game)
{
	int			height;
	int			width;
	static char	**visitmap;

	visitmap = ft_calloc(game->heightmap + 1, sizeof(char *));
	height = 0;
	width = 0;
	while (height < game->heightmap)
	{
		visitmap[height] = ft_calloc(game->widthmap + 1, sizeof(char));
		width = 0;
		while (game->map[height][width])
		{
			visitmap[height][width] = game->map[height][width];
			width++;
		}
		height++;
	}
	if (!search_way (game, visitmap, game->player_h, game->player_w))
		show_exit(game, "ERROR: The map hasnt a solution\n");
	free (visitmap);
	return (1);
}

static int	width_of_map(char *string)
{
	int	width;

	width = 0;
	while (string[width] != '\0')
		width++;
	if (string[width - 1] == '\n')
		width--;
	return (width);
}

static int	add_line(t_complete *game, char *line)
{
	char	**temporary;
	int		i;

	if (!line)
		return (0);
	i = 0;
	game->heightmap++;
	temporary = (char **)malloc(sizeof(char *) * (game->heightmap + 1));
	temporary[game->heightmap] = NULL;
	while (i < game->heightmap - 1)
	{
		if (width_of_map(line) == width_of_map(game->map[i]))
			temporary[i] = game->map[i];
		else
			show_exit(game, "ERROR: This map is not rectangular\n");
		i++;
	}
	temporary[i] = line;
	if (game->map)
		free(game->map);
	game->map = temporary;
	return (1);
}

int	map_reading(t_complete *game, char **argv)
{
	char	*readmap;

	game->fd = open(argv[1], O_RDONLY);
	if (game->fd < 0)
		show_exit(game, "ERROR: This map not exist\n");
	while (1)
	{
		readmap = get_next_line(game->fd);
		if (!add_line(game, readmap))
			break ;
	}
	close (game->fd);
	if (!game->map)
		show_exit(game, "ERROR: This map is empty\n");
	game->widthmap = width_of_map(game->map[0]);
	return (1);
}
