/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:03:30 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/23 15:48:04 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;
	int	range;

	if (min >= max)
		return (0);
	range = max - min;
	arr = (int *)malloc(sizeof(int) * range);
	i = 0;
	while (i < range)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
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
		int *arr = ft_range(min, max);
		for (int i = 0; i < (max - min); i++)
			printf("%d ", arr[i]);
		free(arr);
	}
	printf("\n");
}*/
