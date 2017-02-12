/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaverty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 09:59:28 by aaverty           #+#    #+#             */
/*   Updated: 2015/11/29 18:36:06 by aaverty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	if (!ft_strlen(s2))
		return (((char *)s1));
	while (s1[i] != '\0')
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (s1[i + j] == s2[j] && s1[i + j] != '\0' && i + j < n)
			{
				j++;
				if (s2[j] == '\0')
					return (char *)(&s1[i]);
			}
		}
		i++;
	}
	return (NULL);
}
