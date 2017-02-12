/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmoinat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:34:48 by qmoinat           #+#    #+#             */
/*   Updated: 2015/11/28 12:56:24 by aaverty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *data;

	data = (unsigned char *)s;
	while (n--)
	{
		if (*data == ((unsigned char)c))
			return (data);
		if (n)
			data++;
	}
	return (NULL);
}
