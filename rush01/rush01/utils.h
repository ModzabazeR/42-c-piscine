/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:18:13 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/16 14:18:15 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>
# include <unistd.h>

int		arg_len(int ac, char *a);
int		arg_alpha(char *a);

char	**create_grid(int size);
void	free_grid(char **grid);
void	print_grid(char **grid);
char	**create_views(char *argv);
char	**clone_grid(char **grid)

void	get_col(char *dest, char **grid, int col);
void	rev_arr(char *dest, char *arr);

int		solve(char **grid, char **views);

#endif
