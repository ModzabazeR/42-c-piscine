/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:17:36 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/16 14:17:39 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
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
