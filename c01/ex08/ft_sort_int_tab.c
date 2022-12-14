/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:10:14 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/12 17:08:28 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[i] <= tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int arr[] = {2, 1, 6, 4, 9, 5 ,0, 3};
	ft_sort_int_tab(arr, 8);
	for (int i = 0; i < 8; i++)
	{
		printf("%d ", arr[i]);
	}
}*/
