/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 17:43:35 by mpasquie          #+#    #+#             */
/*   Updated: 2017/11/22 18:01:40 by mpasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*begin;
	t_list	*before;

	if (!lst)
		return (NULL);
	tmp = f(lst);
	if (!(new = ft_lstnew(tmp->content, tmp->content_size)))
		return (NULL);
	new->next = NULL;
	begin = new;
	lst = lst->next;
	before = new;
	while (lst)
	{
		tmp = f(lst);
		if (!(new = ft_lstnew(tmp->content, tmp->content_size)))
			return (NULL);
		new->next = NULL;
		before->next = new;
		before = new;
		lst = lst->next;
	}
	return (begin);
}
