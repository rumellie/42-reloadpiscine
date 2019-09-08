/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecelsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 17:37:47 by ecelsa            #+#    #+#             */
/*   Updated: 2019/07/18 21:30:09 by ecelsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	char			buf[512];
	int				fd;
	unsigned int	fr;

	fr = 1;
	if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd > 0)
		{
			while (fr > 0)
			{
				fr = read(fd, buf, 512 - 1);
				buf[fr] = '\0';
				write(1, buf, fr);
			}
		}
		close(fd);
	}
	return (0);
}
