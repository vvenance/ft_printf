/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaverty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:12:28 by aaverty           #+#    #+#             */
/*   Updated: 2015/11/26 15:15:45 by aaverty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	*tmp;
	int		length;
	int		i;
	char	c_tmp;

	tmp = str;
	length = 0;
	while (*tmp)
	{
		length++;
		tmp++;
	}
	i = 0;
	while (i < (length / 2))
	{
		c_tmp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = c_tmp;
		i++;
	}
	return (str);
}
