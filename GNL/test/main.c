/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 08:52:39 by mpasquie          #+#    #+#             */
/*   Updated: 2017/12/11 10:52:02 by mpasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rendu/get_next_line.h"
#include <unistd.h>
#include <fcntl.h>

int			main(int argc, char **argv)
{		
	char	*line;
	int		fd;

	if (argc < 2)
		return (1);
	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &line))
	{
		ft_putendl(line);
		usleep(32000);
	}
	return (0);
}
