/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:18:03 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/16 14:18:04 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	check_line(char *line, char clue)
{
	char	count;
	int		i;

	count = '1';
	i = 0;
	while (i < 4)
	{
		if (i + 1 < 4 && line[i + 1] > line[i])
			count++;
		i++;
	}
	if (count != clue)
		return (0);
	return (1);
}

int	check_grid(char **grid, char **views)
{
	int		i;
	int		j;
	char	*temprow;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (i == 0 || i == 2)
			{
				if (i == 0)
					temprow = grid[j];
				else
					get_col(temprow, grid, j);
			}
			else
			{
				if (i == 1)
					rev_arr(temprow, grid[j]);
				else
				{
					get_col(temprow, grid, j);
					rev_arr(temprow, grid[j]);
				}
			}
			if (!check_line(temprow, views[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	solve(char **grid, char **views)
{
	char	value;
	int		i;
	int		j;
	char	**clone;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			value = '1';
			while (value <= '4')
			{
				clone = clone_grid(grid);
				clone[i][j] = value;
				value++;
			}
			j++;
		}

		i++;
	}
	return (1);
}

#include <stdio.h>
int main()
{
	printf("%d", check_line("1234", '4'));
}