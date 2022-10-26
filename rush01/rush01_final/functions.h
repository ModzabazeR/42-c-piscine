/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:35:57 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/16 21:36:02 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

int		solve(int **grid, int **views, int *solved);
int		is_there_empty(int **grid, int *row, int *col);
int		is_alone(int **grid, int row, int col, int tower);
int		check_views(int **grid, int **views);
int		check_line(int **grid, int row, int col, int num_of_views);
int		**fill_views(char *argv);
int		**allocate_mem(int size);
int		**clone_grid(int **grid);
void	free_grid(int **grid);
void	print_grid(int **grid);
int		get_view(int **grid, int row, int view_line, int line_index);
void	ft_putchar(char c);
int		argscheck(int argc, char **argv);

#endif
