/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 17:39:07 by mpasquie          #+#    #+#             */
/*   Updated: 2017/11/22 18:00:30 by mpasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *ew)
{
	if (alst && ew)
	{
		if (*alst == NULL)
			ew->next = NULL;
		else
			ew->next = *alst;
		*alst = ew;
	}
}
