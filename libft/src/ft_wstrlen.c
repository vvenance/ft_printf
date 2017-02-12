/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaverty <aaverty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 16:20:31 by aaverty           #+#    #+#             */
/*   Updated: 2016/02/03 15:27:08 by aaverty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wstrlen(wchar_t *chr)
{
	int		res;

	res = 0;
	while (*chr)
	{
		if (*chr <= 0x7F)
		{
			if ((*chr >= 1 && *chr <= 32) || *chr == 127)
				res += 3;
			res += 1;
		}
		else if (*chr <= 0x7FF)
			res += 2;
		else if (*chr <= 0xFFFF)
			res += 3;
		else if (*chr <= 0x10FFFF)
			res += 4;
		chr++;
	}
	return (res);
}
