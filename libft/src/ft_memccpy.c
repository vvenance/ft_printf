/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaverty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:03:21 by aaverty           #+#    #+#             */
/*   Updated: 2015/11/29 17:03:43 by aaverty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ds;
	char			*sr;
	size_t			i;

	i = 0;
	sr = (char *)(src);
	ds = dst;
	while (i < n)
	{
		ds[i] = sr[i];
		if (sr[i] == c)
			return (&ds[i + 1]);
		i++;
	}
	return (NULL);
}
