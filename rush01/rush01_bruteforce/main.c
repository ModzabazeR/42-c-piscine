/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:02:38 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/16 18:02:40 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	arg_len(int ac, char *a)
{
	int	i;

	if (ac != 2)
		return (0);
	i = 0;
	while (a[i] != '\0')
		i++;
	if (i != 31)
		return (0);
	return (1);
}

int	arg_alpha(char *a)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (a[++i] != '\0')
	{
		if ((a[i] < '1' || a[i] > '4') && a[i] != ' ')
			return (0);
		if (a[i] != ' ')
		{
			if (i == 0 && a[i + 1] != ' ')
				return (0);
			else if (a[i + 1] == '\0' && a[i - 1] != ' ')
				return (0);
			else if (a[i + 1] != ' ' && a[i - 1] != ' ')
				return (0);
		}
	}
	return (1);
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

int	up4(char **grid, char **views)
{
	int	count;
	int	max;
	int	i;
	int	j;

	count = 1;
	i = 0;
	while (i < 4)
	{
		max = grid[0][i];
		j = 0;
		while (j < 4)
		{
			if (grid[j + 1][i]  > max)
			{
				count++;
				max = grid[j + 1][i];
			}
		}
		if (count != views[0][i])
			return (1);
		i++;
	}
	return (0);
}

int	down4(char **grid, char **views)
{
	int	count;
	int	max;
	int	i;
	int	j;

	count = 1;
	i = 0;
	while (i < 4)
	{
		max = grid[0][i];
		j = 0;
		while (j < 4)
		{
			if (grid[j + 1][i]  > max)
			{
				count++;
				max = grid[j + 1][i];
			}
		}
		if (count != views[0][i])
			return (1);
		i++;
	}
	return (0);
}

int	solve(char **grid, char **views)
{
	if (grid[0][0] + grid[1][0] + grid[2][0] + grid[3][0] != 10)
		return (0);
	if (grid[0][1] + grid[1][1] + grid[2][1] + grid[3][1] != 10)
		return (0);
	if (grid[0][2] + grid[1][2] + grid[2][2] + grid[3][2] != 10)
		return (0);
	if (grid[0][3] + grid[1][3] + grid[2][3] + grid[3][3] != 10)
		return (0);
	if (up4(grid, views))
		return (0);
	if (down4(grid, views))
		return (0);
	if (right4(grid, views))
		return (0);
	if (left4(grid, views))
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	char	**perm_arr = {"1234" , "1243" , "1324" , "1342" , "1432" ,"1423", "2134" , "2143" , "2314" , "2341" , "2413" , "2431" , "3142" ,"3124" ,"3214" , "3241" ,"3412" , "3421" , "4132" , "4123" , "4213" ,"4231" ,"4321" ,"4312" ,"0000"};
	char	**grid;
	char	**views;

	if (arg_len(argc, argv[1]) && arg_alpha(argv[1]))
	{
		views = create_views(argv[1]);
		grid = create_grid(4);
		if (solve(grid, views))
			print_grid(grid);
		else
			write(1, "Error\n", 6);
		free_grid(grid);
		free_grid(views);
	}
	else
	{
		write(1, "Error\n", 6);
	}
}
