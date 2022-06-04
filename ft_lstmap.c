/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:40:42 by irulusoy          #+#    #+#             */
/*   Updated: 2022/01/14 20:40:45 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*position_new;
	t_list	*position_next;

	if (!lst)
		return (NULL);
	new_list = ft_lstnew((*f)(lst->content));
	position_new = new_list;
	position_next = lst->next;
	while (position_next != NULL)
	{
		position_new->next = ft_lstnew((*f)(position_next->content));
		if (!position_new->next)
		{
			ft_lstclear (&new_list, del);
			return (NULL);
		}
		position_new = position_new->next;
		position_next = position_next->next;
	}
	return (new_list);
}
/*
*lstclear takes ** new_list is *, so
*we send the address of * by &, this is like **
*/
