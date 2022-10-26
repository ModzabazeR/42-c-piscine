/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allprob.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:13:43 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/16 18:13:46 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int **allocate_mem(int size)
{
	int	i;
	int	j;
	int **arr;

	arr = (int**)malloc(sizeof(int) * 4 * size);
	i = 0;
	while (i < size)
	{
		arr[i] = (int*)malloc(sizeof(int) * 4);
		j = 0;
		while (j < 4)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}

void	merge_array(int dest[8][4], int arr1[][4], int arr2[][4], int row_nums[3])
{
	int	i;
	int	j;

	i = 0;
	while (i < row_nums[1])//sizeof(arr1) / (4 * sizeof(int)))
	{
		j = 0;
		while (j < 4){
			dest[i + row_nums[0]][j] = arr1[i][j];
			j++;
		}
		i++;
	}
	//j = i;
	row_nums[0] += row_nums[1];
	i = 0;
	while (i < row_nums[2])
	{
		j = 0;
		while (j < 4){
			dest[i + row_nums[0]][j] = arr2[i][j];
			j++;
		}
		i++;
	}
}

int	**arr1(void)
{
	int	a1[4][4];
	int	a2[4][4];
	int	a3[4][4];
	int **x;
	int len[3] = {0, 4, 4};
	int **y;

	y = allocate_mem(12);
	x = allocate_mem(8);
	//a1 = {{1, 2, 3, 4}, {1, 2, 4, 3}, {1, 3, 2, 4}, {1, 3, 4, 2}};
	//a2 = {{1, 4, 3, 2}, {1, 4, 2, 3}, {2, 1, 3, 4}, {2, 1, 4, 3}};
	//a3 = {{2, 3, 1, 4}, {2, 3, 4, 1}, {2, 4, 1, 3}, {2, 4, 3, 1}};
	merge_array(x, a1, a2, len);
	merge_array(y, x, a3, len);
	return (y);
}

int	**arr2(void)
{
	int	a4[4][4] = {{3, 1, 4, 2}, {3, 1, 2, 4}, {3, 2, 1, 4}, {3, 2, 4, 1}};
	int	a5[4][4] = {{3, 4, 1, 2}, {3, 4, 2, 1}, {4, 1, 3, 2}, {4, 1, 2, 3}};
	int a6[4][4] = {{4, 2, 1, 3}, {4, 2, 3, 1}, {4, 3, 2, 1}, {4, 3, 1, 2}};
	int len[3] = {0, 4, 4};
	int x[8][4];
	int **y;

	y = allocate_mem(12);
	//x = allocate_mem(8);
	//a4 
	//a5 = {{3, 4, 1, 2}, {3, 4, 2, 1}, {4, 1, 3, 2}, {4, 1, 2, 3}};
	//a6 = {{4, 2, 1, 3}, {4, 2, 3, 1}, {4, 3, 2, 1}, {4, 3, 1, 2}};
	merge_array(x, a4, a5, len);
	//merge_array(y, x, a6, len);
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 4; j++) printf("%d ", x[i][j]);
	}
	return (y);
}

int main()
{
	int *a1;
	int **a2;
	int *arr;

	//a1 = arr1();
	a2 = arr2();

	//arr = allocate_mem(24);
	//merge_array(arr, a1, a2);
	//for (int i = 0; i < 24; i++)
	//{
		//printf("%d ", arr[i]);
	//}
}