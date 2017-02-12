/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaverty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 13:03:25 by aaverty           #+#    #+#             */
/*   Updated: 2015/12/31 16:45:32 by aaverty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_strlowcase(str);
		i++;
	}
	str[0] = ft_toupper(str[0]);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i - 1] == ' ' || (str[i - 1] >= 33 && str[i - 1] <= 47))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = ft_toupper(str[i]);
			}
		}
		i++;
	}
	return (str);
}
