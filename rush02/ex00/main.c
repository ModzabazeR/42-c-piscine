/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:35:15 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/23 00:33:27 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "utils.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	buf[8];

	if (argc == 2)
	{
		fd = ft_fopen("numbers.dict");
		write(1, buf, read(fd, buf, 8));
		ft_fclose(fd);
	}

}
