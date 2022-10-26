/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:53:35 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/24 19:25:20 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_seperator(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r');
}

int	is_base_wrong(char *base)
{
	int	i;
	int	j;

	if (base == 0 || ft_strlen(base) <= 1)
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		if (is_seperator(base[i]) || base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j++])
				return (1);
		}
		i++;
	}
	return (0);
}

int	ft_intlen(unsigned int n, int radix, int negative)
{
	int	len;

	len = negative;
	while (1)
	{
		len++;
		if (n / radix == 0)
			break ;
		n /= radix;
	}
	return (len);
}
