/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaverty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 19:06:22 by aaverty           #+#    #+#             */
/*   Updated: 2015/11/28 12:45:02 by aaverty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char *s;

	s = dst;
	while (n > 0 && *src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
		--n;
	}
	while (n > 0)
	{
		*dst = '\0';
		dst++;
		--n;
	}
	return (s);
}
