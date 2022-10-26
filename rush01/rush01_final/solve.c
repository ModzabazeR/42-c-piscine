/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:37:16 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/16 21:45:34 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	solve(int **grid, int **views, int *solved)
{
	int	row;
	int	col;
	int	i;
	int	**clone;

	if (!is_there_empty(grid, &row, &col))
		return (1);
	i = 0;
	while (++i <= 4)
	{
		if (!is_alone(grid, row, col, i))
			continue ;
		clone = clone_grid(grid);
		clone[row][col] = i;
		if (solve(clone, views, solved) && check_views(clone, views))
		{
			*solved = 1;
			print_grid(clone);
			free_grid(clone);
			return (1);
		}
		free_grid(clone);
	}
	return (0);
}

int	is_there_empty(int **grid, int *row, int *col)
{
	*row = 0;
	while (*row < 4)
	{
		*col = 0;
		while (*col < 4)
		{
			if (grid[*row][*col] == 0)
				return (1);
			(*col)++;
		}
		(*row)++;
	}
	return (0);
}

int	is_alone(int **grid, int row, int col, int tower)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i++] == tower)
			return (0);
	}
	i = 0;
	while (i < 4)
	{
		if (grid[i++][col] == tower)
			return (0);
	}
	return (1);
}

int	check_views(int **grid, int **views)
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			if (!check_line(grid, row, col, views[row][col]))
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}

int	check_line(int **grid, int row, int col, int num_of_views)
{
	int	i;
	int	temp_num;

	i = 0;
	while (i < 4)
	{
		temp_num = get_view(grid, row, col, i);
		if (temp_num == 0)
			return (0);
		num_of_views--;
		while (i + 1 < 4 && temp_num > get_view(grid, row, col, i + 1))
			i++;
		i++;
	}
	return (num_of_views == 0);
}
