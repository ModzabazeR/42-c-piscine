/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:29:20 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/23 12:29:22 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	pow;

	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	i = 0;
	pow = 1;
	while (i < power)
	{
		pow *= nb;
		i++;
	}
	return (pow);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 3)
		printf("%d", ft_iterative_power(atoi(av[1]), atoi(av[2])));
	printf("\n");
}*/
