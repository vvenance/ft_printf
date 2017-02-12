/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaverty <aaverty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 18:01:23 by aaverty           #+#    #+#             */
/*   Updated: 2015/12/30 19:21:06 by aaverty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist			*ft_dlst_push_back(t_dlist *list, t_node *new)
{
	if (list != NULL)
	{
		if (list->last == NULL)
		{
			new->prev = NULL;
			list->first = new;
			list->last = new;
		}
		else
		{
			list->last->next = new;
			new->prev = list->last;
			list->last = new;
		}
		list->lenght++;
	}
	return (list);
}
