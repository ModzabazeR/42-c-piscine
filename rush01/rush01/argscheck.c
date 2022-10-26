/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argscheck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:17:46 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/16 14:17:48 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

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
