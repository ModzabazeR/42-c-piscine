/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:11:31 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/13 15:36:57 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
		{
			str[i] = c - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	char str[] = "Hello";
	ft_strupcase(str);
	printf("%s", str);
}*/
