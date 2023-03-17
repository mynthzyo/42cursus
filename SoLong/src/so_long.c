/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:49:02 by avilchez          #+#    #+#             */
/*   Updated: 2022/12/09 12:54:05 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	freeandexit(t_complete *game)
{
	int	i;

	i = 0;
	if (game->mlxpointer != NULL)
		mlx_destroy_window(game->mlxpointer, game->winpointer);
	free(game->mlxpointer);
	while (i < game->heightmap - 1)
	{
		free(game->map[i]);
		i++;
	}
	if (game->map)
		free(game->map);
	write(1, "\n\033[31m[ so_long closed successfully ]\n", 39);
	exit(0);
}

int	show_exit(t_complete *game, char *str)
{
	ft_putstr(str);
	write(1, "\n", 1);
	freeandexit(game);
	return (0);
}

int	exit_point(t_complete *game)
{
	int	line;

	line = 0;
	if (game->winpointer)
		mlx_destroy_window(game->mlxpointer, game->winpointer);
	free(game->mlxpointer);
	while (line < game->heightmap - 1)
		free(game->map[line++]);
	free(game->map);
	exit(0);
}

int	checkextension(char *str, t_complete *game)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (str[i - 1] == 'r' && str[i - 2] == 'e'
		&& str[i - 3] == 'b' && str[i - 4] == '.')
	{
		i = open(str, O_RDONLY);
		if (i == -1)
			show_exit(game, "ERROR: File Name is not correct");
		else
			close(i);
		return (0);
	}
	show_exit(game, "ERROR: Files without .ber extension is not accepted");
	return (0);
}

int	main(int argc, char **argv)
{
	t_complete	game;

	if (argc != 2)
		return (0);
	ft_memset(&game, 0, sizeof(t_complete));
	checkextension(argv[1], &game);
	map_reading(&game, argv);
	check_errors(&game);
	game.mlxpointer = mlx_init();
	game.winpointer = mlx_new_window(game.mlxpointer, (game.widthmap * 40),
			(game.heightmap * 40), "SO LONG ZOMBIEEE!");
	place_images_in_game(&game);
	adding_in_graphics(&game);
	mlx_key_hook(game.winpointer, controls_working, &game);
	mlx_hook(game.winpointer, 17, 0, (void *)exit, 0);
	mlx_loop(game.mlxpointer);
}
