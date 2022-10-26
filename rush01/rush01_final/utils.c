/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 22:11:47 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/16 22:11:51 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	get_view(int **grid, int row, int view_line, int line_index)
{
	if (row == 2)
		return (grid[view_line][line_index]);
	if (row == 3)
		return (grid[view_line][3 - line_index]);
	if (row == 0)
		return (grid[line_index][view_line]);
	if (row == 1)
		return (grid[3 - line_index][view_line]);
	return (-1);
}
