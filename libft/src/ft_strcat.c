/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaverty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 19:57:16 by aaverty           #+#    #+#             */
/*   Updated: 2015/11/28 13:27:56 by aaverty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	endchar;
	int i;

	endchar = 0;
	i = 0;
	while (s1[endchar] != '\0')
	{
		endchar++;
	}
	while (s2[i] != '\0')
	{
		s1[endchar] = s2[i];
		endchar++;
		i++;
	}
	s1[endchar] = '\0';
	return (s1);
}
