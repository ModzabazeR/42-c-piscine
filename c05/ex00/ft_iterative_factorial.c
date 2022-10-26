/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:28:59 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/23 12:29:04 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	i = 1;
	fact = 1;
	while (i <= nb)
	{
		fact *= i;
		i++;
	}
	return (fact);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	if (ac == 2)
		printf("%d", ft_iterative_factorial(atoi(av[1])));
	printf("\n");
}*/
