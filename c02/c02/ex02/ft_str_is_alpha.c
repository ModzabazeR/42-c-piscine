/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:25:52 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/13 14:31:08 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include <stdio.h>

int main(void)
{
	int isAlpha = ft_str_is_alpha("");
	if (!isAlpha)
	{
		printf("%s", "String is not alphabetical");
	}
	else
	{
		printf("%s", "String is alphabetical or empty");
	}
}*/
