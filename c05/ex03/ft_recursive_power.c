/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:29:27 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/23 12:29:31 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power != 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 3)
		printf("%d", ft_recursive_power(atoi(av[1]), atoi(av[2])));
	printf("\n");
}*/
