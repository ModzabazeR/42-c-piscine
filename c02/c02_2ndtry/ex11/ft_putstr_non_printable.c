/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:58:15 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/14 14:18:41 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_printable(char c)
{
	return (c >= ' ' && c != 127);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			*hex_str;
	unsigned char	cur;

	hex_str = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		cur = str[i];
		if (is_printable(cur))
		{
			ft_putchar(cur);
		}
		else
		{
			ft_putchar(hex_str[cur / 16]);
			ft_putchar(hex_str[cur % 16]);
		}
		i++;
	}
}
