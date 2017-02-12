/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaverty <aaverty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 18:01:23 by aaverty           #+#    #+#             */
/*   Updated: 2016/03/22 16:52:38 by aaverty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_node			*ft_create_node(void)
{
	t_node	*new;
	int		i;

	i = 0;
	new = malloc(sizeof(*new));
	if (new != NULL)
	{
		new->next = NULL;
		new->prev = NULL;
	}
	return (new);
}
