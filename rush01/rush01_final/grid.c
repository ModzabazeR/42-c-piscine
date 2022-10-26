/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:53:16 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/16 21:53:21 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "functions.h"

int	**fill_views(char *argv)
{
	int	i;
	int	j;
	int	**views;

	j = 0;
	i = 0;
	views = allocate_mem(4);
	while (i < 16)
	{
		if (argv[i] == ' ')
		{
			argv++;
			continue ;
		}
		views[j][i % 4] = argv[i] - '0';
		if (i % 4 == 3)
			j++;
		i++;
	}
	return (views);
}

int	**allocate_mem(int size)
{
	int	i;
	int	j;
	int	**grid;

	grid = malloc(sizeof(int *) * size);
	i = 0;
	while (i < size)
	{
		grid[i] = malloc(sizeof(int) * size);
		j = 0;
		while (j < size)
			grid[i][j++] = 0;
		i++;
	}
	return (grid);
}

int	**clone_grid(int **grid)
{
	int	**clone;
	int	i;
	int	j;

	clone = allocate_mem(4);
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

void	free_grid(int **grid)
{
	int	i;

	i = 0;
	while (i < 4)
		free(grid[i++]);
	free(grid);
}

void	print_grid(int **grid)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(grid[i][j] + '0');
			j++;
			if (j != 4)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i++;
	}
}
