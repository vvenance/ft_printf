/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobrunet <cobrunet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/26 13:30:01 by cobrunet          #+#    #+#             */
/*   Updated: 2015/12/31 13:05:15 by aaverty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static long int	ft_pow(int base, int i)
{
	if (i == 0)
		return (1);
	return ((long int)base * ft_pow(base, i - 1));
}

char			*ft_itoa_base(int value, int base)
{
	char	*res;
	int		i;

	i = 1;
	if (base <= 1 || base > 16)
		return (NULL);
	if (base == 10 || value == 0)
		return (ft_itoa(value));
	value = value < 0 ? -value : value;
	while (ft_pow(base, i) - 1 < (long int)value)
		i++;
	if (!(res = malloc(sizeof(res) * (i + 1))))
		return (NULL);
	res[i] = '\0';
	i--;
	while (value)
	{
		if (value % base >= 10)
			res[i] = 'A' + (value % base - 10);
		else
			res[i] = '0' + value % base;
		value /= base;
		i--;
	}
	return (res);
}
