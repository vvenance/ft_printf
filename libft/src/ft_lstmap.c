/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaverty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 18:12:50 by aaverty           #+#    #+#             */
/*   Updated: 2015/12/01 20:42:27 by aaverty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*keep;
	t_list	*new;

	new = f(ft_lstnew(lst->content, lst->content_size));
	keep = new;
	while (lst->next != NULL)
	{
		lst = lst->next;
		new->next = f(ft_lstnew(lst->content, lst->content_size));
		new = new->next;
	}
	return (keep);
}
