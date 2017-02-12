/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaverty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 09:05:05 by aaverty           #+#    #+#             */
/*   Updated: 2015/11/25 14:43:58 by aaverty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int	endchar;
	int	i;

	endchar = 0;
	i = 0;
	while (s1[endchar] != '\0')
		endchar++;
	while (n)
	{
		s1[endchar] = s2[i];
		endchar++;
		i++;
		n--;
	}
	s1[endchar] = '\0';
	return (s1);
}
