/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:35:12 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/10 15:01:39 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_range(int range[], int n)
{
	int	i;

	i = 0;
	while (++i < n)
	{
		if (range[i - 1] >= range[i])
		{
			return ;
		}
	}
	i = -1;
	while (++i < n)
	{
		ft_putchar(range[i] + 48);
	}
	if (range[0] < 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	range[10];

	i = -1;
	while (++i < n)
	{
		range[i] = i;
	}
	while (range[0] <= 10 - n)
	{
		ft_print_range(range, n);
		range[n - 1]++;
		i = n;
		while (i)
		{
			i--;
			if (range[i] > 9)
			{
				range[i - 1]++;
				range[i] = 0;
			}
		}
	}
}

int main()
{
	ft_print_combn(5);
}
