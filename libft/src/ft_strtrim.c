/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaverty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 20:33:21 by aaverty           #+#    #+#             */
/*   Updated: 2015/12/02 11:43:36 by aaverty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	if (!s)
		return (NULL);
	if (!*s)
		return ((char *)s);
	j = ft_strlen((char *)s) - 1;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != '\0')
		i++;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t' || s[j] == '\0')
			&& j > i)
		j--;
	return (ft_strsub(s, i, j - i + 1));
}
