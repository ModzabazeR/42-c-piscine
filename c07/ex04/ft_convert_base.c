/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:50:24 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/24 19:31:58 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	is_seperator(char c);
int	is_base_wrong(char *base);
int	ft_intlen(unsigned int n, int radix, int negative);

int	get_number(char	*base, char match)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == match)
			return (i);
		i++;
	}
	return (-1);
}

int	check_sign(int result, int sign)
{
	if (result == 0)
		sign = 1;
	return (sign);
}

char	*ft_itobase(char *base, unsigned int n, int negative)
{
	int		i;
	int		radix;
	int		len;
	char	*str;

	radix = ft_strlen(base);
	len = ft_intlen(n, radix, negative);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (0);
	if (negative)
		str[0] = '-';
	i = negative;
	while (i < len)
	{
		str[len - (!negative) - i] = base[n % radix];
		n /= radix;
		i++;
	}
	str[len] = '\0';
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	result;
	int				radix;
	int				sign;

	if (is_base_wrong(base_from) || is_base_wrong(base_to))
		return (0);
	radix = ft_strlen(base_from);
	sign = 1;
	result = 0;
	while (is_seperator(*nbr))
		nbr++;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*(nbr++) == '-')
			sign *= -1;
	}
	while (get_number(base_from, *nbr) != -1)
	{
		result *= radix;
		result += get_number(base_from, *nbr);
		nbr++;
	}
	sign = check_sign(result, sign);
	return (ft_itobase(base_to, result, (sign < 0)));
}
