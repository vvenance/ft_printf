/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaverty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:24:15 by aaverty           #+#    #+#             */
/*   Updated: 2015/11/30 13:37:26 by aaverty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dstsize;
	size_t srcsize;
	size_t i;
	size_t j;

	dstsize = 0;
	srcsize = ft_strlen(src);
	while (dst[dstsize] != '\0')
	{
		if (dstsize == size)
			return (dstsize + srcsize);
		dstsize++;
	}
	if (dstsize < size)
	{
		i = dstsize;
		j = 0;
		while (src[j] != '\0' && j < (size - dstsize - 1))
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	return (dstsize + srcsize);
}
