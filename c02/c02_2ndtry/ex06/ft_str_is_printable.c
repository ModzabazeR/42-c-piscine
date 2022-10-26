/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:06:13 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/13 18:27:47 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c < ' ' || c > 126)
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
    int isPrint = ft_str_is_printable("Hello");
    if (!isPrint)
    {
        printf("%s", "String is not printable");
    }
    else
    {
        printf("%s", "String is printable or empty");
    }
}*/
