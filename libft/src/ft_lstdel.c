/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaverty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 17:28:05 by aaverty           #+#    #+#             */
/*   Updated: 2015/12/10 10:02:12 by aaverty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*bef;

	if (!alst || !del)
		return ;
	tmp = *alst;
	while (tmp->next != NULL)
	{
		del(tmp->content, tmp->content_size);
		bef = tmp;
		tmp = tmp->next;
		free(bef);
	}
	del(tmp->content, tmp->content_size);
	*alst = NULL;
}
