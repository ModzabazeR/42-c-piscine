/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:32:53 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/19 13:53:18 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

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
/*
#include <stdio.h>
#include <string.h>
int main(int argc, char **argv) {
	printf("%d\n", strcmp(argv[1], argv[2]));
	printf("%d", ft_strcmp(argv[1], argv[2]));
}*/
