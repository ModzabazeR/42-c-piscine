/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                              :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:17:54 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/16 16:41:19 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	**clone_grid(char **grid)
{
	char	**clone;
	int		i;
	int		j;

	clone = create_grid(4);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			clone[i][j] = grid[i][j];
			j++;
		}
		i++;
	}
	return (clone);
}

char	**create_grid(int size)
{
	int		i;
	int		j;
	char	**grid;

	grid = malloc(sizeof(char *) * size);
	i = 0;
	while (i < size)
	{
		grid[i] = malloc(sizeof(char) * size);
		j = 0;
		while (j < size)
		{
			grid[i][j] = '0';
			j++;
		}
		i++;
	}
	return (grid);
}

void	free_grid(char **grid)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

void	print_grid(char **grid)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write(1, &(grid[i][j]), 1);
			j++;
			if (j != 4)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
		i++;
	}
}

char	**create_views(char *argv)
{
	int		i;
	int		j;
	char	**views;

	j = 0;
	i = 0;
	views = create_grid(4);
	while (i < 16)
	{
		if (argv[i] == ' ')
		{
			argv++;
			continue ;
		}
		views[j][i % 4] = argv[i];
		if (i % 4 == 3)
			j++;
		i++;
	}
	return (views);
}
