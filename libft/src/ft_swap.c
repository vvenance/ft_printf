/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaverty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/10 13:16:12 by aaverty           #+#    #+#             */
/*   Updated: 2016/02/12 20:54:45 by aaverty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_swap2(int *xdep, int *xfin, int *ydep, int *yfin)
{
	ft_swap(xdep, xfin);
	ft_swap(ydep, yfin);
}
