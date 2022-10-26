/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:36:43 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/16 21:40:12 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "functions.h"

int	main(int argc, char **argv)
{
	int	**views;
	int	**grid;
	int	solved;
	int	i;

	i = 0;
	if (argscheck(argc, argv))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	views = fill_views(argv[1]);
	grid = allocate_mem(4);
	solved = 0;
	solve(grid, views, &solved);
	if (!solved)
		write(1, "Error\n", 6);
	return (0);
}
