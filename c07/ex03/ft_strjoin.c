/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:55:28 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/24 12:21:39 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	calculate_len(char **strs, int size, int sep_len)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		len += sep_len;
		i++;
	}
	len -= sep_len;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	char	*temp;
	int		full_len;
	int		i;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_len = calculate_len(strs, size, ft_strlen(sep));
	str = (char *)malloc(sizeof(char) * (full_len + 1));
	temp = str;
	i = 0;
	while (i < size)
	{
		ft_strcpy(temp, strs[i]);
		temp += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(temp, sep);
			temp += ft_strlen(sep);
		}
		i++;
	}
	*temp = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char *result;
	char **strs;
	char *sep = "-";
	strs = (char **)malloc(4 * sizeof(strs));
	strs[0] = "Hello";
	strs[1] = "World";
	strs[2] = "I\'m";
	strs[3] = "Moddaeng";
	for (int i = 0; i < 4; i++)
	{
		result = ft_strjoin(i+1, strs, sep);
		printf("result with size = %d: \"%s\"\n", i+1, result);
		free(result);
	}
}*/
