/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:57:45 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/09 15:55:54 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_putchar.c"

void	outx(int i, int x)
{
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('/');
		}
		else if (i == x - 1)
		{
			ft_putchar(92);
		}
		else
		{
			ft_putchar('*');
		}
		i++;
	}
}

void	outy(int j, int y, int x)
{
	int	i;

	while (j < y - 2)
	{
		i = 0;
		while (i < x)
		{
			if (i == 0)
			{
				ft_putchar('*');
			}
			else if (i == x - 1)
			{
				ft_putchar('*');
			}
			else
			{
				ft_putchar(' ');
			}
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

void	low3(int x, int y)
{
	if (x == 1 && y == 1)
	{
		ft_putchar('/');
	}
	else if (x == 1 && y == 2)
	{
		ft_putchar('/');
		ft_putchar('\n');
		ft_putchar(92);
	}
	else if (x == 2 && y == 1)
	{
		ft_putchar('/');
		ft_putchar(92);
	}
	else
	{
		ft_putchar('/');
		ft_putchar(92);
		ft_putchar('\n');
		ft_putchar(92);
		ft_putchar('/');
	}
}

void	more3(int i, int x)
{
	if (i == 0)
	{
		ft_putchar(92);
	}
	else if (i == x - 1)
	{
		ft_putchar('/');
	}
	else
	{
		ft_putchar('*');
	}
}

int	rush(int x, int y)
{
	int	i;

	if (x < 3 && y < 3)
	{
		low3(x, y);
	}
	else
	{
		i = 0;
		outx(i, x);
		ft_putchar('\n');
		if (y > 1)
		{
			outy(0, y, x);
			while (i < x)
			{
				more3(i, x);
				i++;
			}
		}
	}
	return (0);
}
