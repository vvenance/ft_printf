/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaverty <aaverty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 15:00:06 by aaverty           #+#    #+#             */
/*   Updated: 2016/02/03 15:00:25 by aaverty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstaddend(t_list **alst, t_list *new)
{
	t_list	*temp;

	if (!new)
		return (0);
	if (!(*alst))
	{
		*alst = new;
		return (1);
	}
	temp = *alst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (1);
}
