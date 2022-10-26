/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:53:42 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/13 15:00:14 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c < 'a' || c > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
    int isLow = ft_str_is_lowercase("hello");
    if (!isLow)
    {
        printf("%s", "String is not lowercase");
    }
    else
    {
        printf("%s", "String is lowercase or empty");
    }
}*/
