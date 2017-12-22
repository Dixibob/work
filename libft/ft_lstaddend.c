/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 10:06:26 by mpasquie          #+#    #+#             */
/*   Updated: 2017/12/11 10:11:55 by mpasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstaddend(t_list **lst, t_list *ew)
{
	t_list		*view;

	view = *lst;
	if (view != NULL)
	{
		while (view->next !=NULL)
			view = view->next;
		view->next = ew;
	}
	else
		*lst = ew;
}
