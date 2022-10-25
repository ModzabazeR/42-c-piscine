/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 00:19:17 by phchirap          #+#    #+#             */
/*   Updated: 2022/10/23 00:25:25 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_fopen(char *path)
{
	return (open(path, O_RDONLY));
}

int	ft_fclose(int fd)
{
	return (close(fd));
}
