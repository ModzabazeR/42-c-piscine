/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:16:28 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/24 21:56:45 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_seperator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strcnt(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_seperator(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !is_seperator(str[i], charset))
			i++;
	}
	return (count);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !is_seperator(str[i], charset))
		i++;
	return (i);
}

char	*ft_getword(char *str, char *charset)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = ft_strlen_sep(str, charset);
	word = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;

	i = 0;
	arr = (char **)malloc(sizeof(char *) * ft_strcnt(str, charset) + 1);
	while (*str != '\0')
	{
		while (*str != '\0' && is_seperator(*str, charset))
			str++;
		if (*str != '\0')
		{
			arr[i] = ft_getword(str, charset);
			i++;
		}
		while (*str != '\0' && !is_seperator(*str, charset))
			str++;
	}
	arr[i] = 0;
	return (arr);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int		index;
	char	**split;
	(void)	argc;
	split = ft_split(argv[1], argv[2]);
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}*/
