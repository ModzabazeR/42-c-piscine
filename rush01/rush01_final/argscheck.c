/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argscheck.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:35:35 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/16 21:38:52 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	argument_number_error(int ac, char *str)
{
	int	i;

	if (ac != 2)
		return (1);
	i = 0;
	while (str[i] != '\0')
		i++;
	if (i != 31)
		return (1);
	return (0);
}

int	invalid_views(char *str)
{
	int	i;

	i = 0;
	while (i < 30)
	{
		if (str[i] < '1' || str[i] > '4' || str[i + 1] != ' ')
			return (1);
		i += 2;
	}
	if (str[30] < '1' || str[30] > '4')
		return (1);
	return (0);
}

int	incomplete_addition(char *str)
{
	int	j;

	j = 0;
	while (j < 31)
	{
		if (j < 7 || (j > 15 && j < 24))
		{
			if ((str[j] + str[j + 8] - 48) > '5')
				return (1);
			else if ((str[j] + str[j + 8] - 48) < '3')
				return (1);
		}
		j += 2;
	}
	return (0);
}

int	argscheck(int argc, char **argv)
{
	int	is_error;

	is_error = argument_number_error(argc, argv[1]);
	if (!is_error)
	{
		is_error = invalid_views(argv[1]);
		if (!is_error)
		{
			is_error = incomplete_addition(argv[1]);
		}
	}
	return (is_error);
}
