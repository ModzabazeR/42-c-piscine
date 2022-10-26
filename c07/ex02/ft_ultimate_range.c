/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:39:50 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/23 15:47:40 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;
	int	bound;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min;
	arr = (int *)malloc(sizeof(int) * bound);
	if (arr == 0)
	{
		*range = 0;
		return (-1);
	}
	*range = arr;
	i = 0;
	while (i < bound)
	{
		arr[i] = min + i;
		i++;
	}
	return (bound);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int min = atoi(av[1]);
		int max = atoi(av[2]);
		int *arr;
		ft_ultimate_range(&arr, min, max);
		for (int i = 0; i < (max - min); i++)
			printf("%d ", arr[i]);
		free(arr);
	}
	printf("\n");
}*/
