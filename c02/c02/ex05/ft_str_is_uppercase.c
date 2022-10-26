/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:02:36 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/13 15:03:39 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c < 'A' || c > 'Z')
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
    int isUp = ft_str_is_uppercase("HELLO");
    if (!isUp)
    {
        printf("%s", "String is not uppercase");
    }
    else
    {
        printf("%s", "String is uppercase or empty");
    }
}*/
