/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_dlist.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaverty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 19:19:08 by aaverty           #+#    #+#             */
/*   Updated: 2015/12/30 19:30:10 by aaverty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_dlist			*ft_create_list(void)
{
	t_dlist	*new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	else
	{
		new->first = NULL;
		new->last = NULL;
		new->lenght = 0;
	}
	return (new);
}
