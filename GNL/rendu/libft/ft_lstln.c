/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstln.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 09:37:05 by mpasquie          #+#    #+#             */
/*   Updated: 2017/12/11 10:05:26 by mpasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstln(void *content, size_t content_size)
{
	t_list*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (lst != NULL)
	{
		lst->content = content;
		lst->content_size = content_size;
		lst->next = NULL;
	}
	return (lst);
}
