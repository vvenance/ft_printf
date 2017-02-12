/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaverty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/13 09:40:24 by aaverty           #+#    #+#             */
/*   Updated: 2015/12/31 16:58:28 by aaverty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_recursive_factorial(int nb)
{
	int fact;

	fact = 0;
	if (nb == 1 || nb == 0)
	{
		fact = 1;
		return (fact);
	}
	else if (nb < 0 || nb > 12)
		return (0);
	else
	{
		fact = nb * ft_recursive_factorial(nb - 1);
		return (fact);
	}
}
