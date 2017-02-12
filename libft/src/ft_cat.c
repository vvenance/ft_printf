/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaverty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/24 09:51:52 by aaverty           #+#    #+#             */
/*   Updated: 2015/12/31 16:54:32 by aaverty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "libft.h"
#define BUF_SIZE 30000

int		ft_cat(int fd)
{
	int		i;
	int		ret;
	char	buf[BUF_SIZE + 1];

	i = 0;
	while (0 != (ret = (read(fd, buf, BUF_SIZE))))
	{
		if (ret == -1)
		{
			close(fd);
			return (-1);
		}
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(fd);
	return (0);
}
