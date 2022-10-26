/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:30:16 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/23 14:44:29 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return ((s1[i] - '0') - (s2[i] - '0'));
}

void	ft_sort_args(char **args, int size)
{
	int	i;
	int	swapped;

	while (1)
	{
		i = 1;
		swapped = 0;
		while (i < size)
		{
			if (ft_strcmp(args[i], args[i + 1]) > 0)
			{
				ft_swap(&args[i], &args[i + 1]);
				swapped = 1;
			}
			i++;
		}
		if (!swapped)
			break ;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 2)
		ft_sort_args(argv, argc - 1);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
}
