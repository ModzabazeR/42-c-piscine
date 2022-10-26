/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:28:46 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/19 16:04:48 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr;
	int		i;
	int		j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(int ac, char **av)
{
	printf("%s\n", strstr("Foo Bar Baz", "Bar"));
	printf("%s", ft_strstr("Foo Bar Baz", "Bar"));
}*/
