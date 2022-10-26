/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:25:04 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/14 13:46:39 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include<stdio.h>
#include<string.h>
int		main(void)
{
	char *src;
	char dest[20];

	src = "Hello World";
	printf("base   : %s\n", src);
	strncpy(dest, src, 8);
	printf("cpy    : %s\n", dest);
	ft_strncpy(dest, src, 8);
	printf("ft_cpy : %s\n", dest);
}*/
