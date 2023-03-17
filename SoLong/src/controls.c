/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:34:24 by avilchez          #+#    #+#             */
/*   Updated: 2022/12/02 12:53:34 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static int	right_move(t_complete *game, int i, int j);

static int	keyboard_w_s(t_complete *game, int movement)
{
	int	i;
	int	j;
	int	k;

	i = game->player_w;
	j = game->player_h;
	if (movement == 13)
	{
		if (game->map[--j][i] == '1')
			return (0);
		k = right_move(game, i, j);
		if (!k)
			return (0);
		game->map[j + 1][i] = '0';
	}
	else if (movement == 1)
	{
		if (game->map[++j][i] == '1')
			return (0);
		k = right_move(game, i, j);
		if (!k)
			return (0);
		game->map[j - 1][i] = '0';
	}
	return (1);
}

static int	keyboard_a_d(t_complete *game, int movement)
{
	int	i;
	int	j;
	int	k;

	i = game->player_w;
	j = game->player_h;
	if (movement == 0)
	{
		if (game->map[j][--i] == '1')
			return (0);
		k = right_move(game, i, j);
		if (!k)
			return (0);
		game->map[j][i + 1] = '0';
	}
	else if (movement == 2)
	{
		if (game->map[j][++i] == '1')
			return (0);
		k = right_move(game, i, j);
		if (!k)
			return (0);
		game->map[j][i - 1] = '0';
	}
	return (1);
}

static int	right_move(t_complete *game, int i, int j)
{
	if (game->map[j][i] == 'O')
		show_exit(game, "You Have Won, Congrats!\n");
	if (game->map[j][i] == 'E')
		return (0);
	if (game->map[j][i] == '0')
	{
		game->map[j][i] = 'P';
		game->player_w = i;
		game->player_h = j;
		game->counter++;
	}
	if (game->map[j][i] == 'C')
	{
		game->map[j][i] = 'P';
		game->player_w = i;
		game->player_h = j;
		game->collectables--;
		if (game->collectables == 0)
		{
			game->map[game->exit_h][game->exit_w] = 'O';
			place_dungeon(game, game->exit_h, game->exit_w);
		}
		game->counter++;
	}
	return (1);
}

int	controls_working(int command, t_complete *game)
{
	int	works;

	if (command == 53)
		exit_point(game);
	if (command == 13)
		works = keyboard_w_s(game, command);
	if (command == 1)
		works = keyboard_w_s(game, command);
	if (command == 0)
		works = keyboard_a_d(game, command);
	if (command == 2)
		works = keyboard_a_d(game, command);
	if (works)
	{
		adding_in_graphics(game);
		write_move(game);
	}
	return (1);
}

void	write_move(t_complete *game)
{
	ft_putstr("Steps Taken: ");
	ft_putnbr(game->counter);
	write(1, "\n", 1);
	ft_putstr("Collectables Remaining: ");
	ft_putnbr(game->collectables);
	write(1, "\n", 1);
}
