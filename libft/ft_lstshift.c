/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstshift.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 10:09:21 by mpasquie          #+#    #+#             */
/*   Updated: 2017/12/11 10:11:06 by mpasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstshift(t_list **alst)
{
	t_list	*new_first;

	if (alst != NULL && *alst != NULL)
	{
		new_first = (*alst)->next;
		free(*alst);
		*alst = new_first;
	}
}
