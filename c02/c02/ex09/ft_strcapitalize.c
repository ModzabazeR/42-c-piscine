/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:48:47 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/17 15:26:01 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_isalpha(char c)
{
	return (ft_isupper(c) || ft_islower(c));
}

void	ft_transform(char *str, char c, int i)
{
	if (!ft_isalpha(c) && !(c >= '0' && c <= '9'))
		return ;
	else if (i == 0 && ft_islower(c))
		str[i] = c - 32;
	else if (ft_islower(c) && !ft_isalpha(str[i - 1]))
	{
		if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
			printf("%c\n", str[i]);
			str[i] = c - 32;
	}
	else if (ft_isupper(c) && i > 0)
	{
		if (ft_isalpha(str[i + 1]))
			str[i] = c + 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		ft_transform(str, c, i);
		i++;
	}
	return (str);
}
/*

int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str2[] = "Vk_(7X)Vmf#H'Fk?>8j@} /7VVxh3(X{6)Xb";
	char str3[] = "Vla+d";
	printf("%s", ft_strcapitalize(str2));
}*/
