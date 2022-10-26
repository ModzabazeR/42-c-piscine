/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:30:26 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/09 15:58:29 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"rush01.c"

int	strtoi(char argv[])
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (argv[i] != '\0')
	{
		result *= 10;
		result += argv[i] - '0';
		i++;
	}
	return (result);
}

int	main(int args, char *argv[])
{
	int	x;
	int	y;

	args = 10;
	x = strtoi(argv[1]);
	y = strtoi(argv[2]);
	rush(x, y);
	return (0);
}
/////////////////////////////////////////////////////////////Credit From Maksim
