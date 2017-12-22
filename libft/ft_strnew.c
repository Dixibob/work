/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:43:45 by mpasquie          #+#    #+#             */
/*   Updated: 2017/11/15 10:30:49 by mpasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	if ((new = ft_memalloc(++size)))
	{
		i = 0;
		while (i < size)
		{
			new[i] = '\0';
			i++;
		}
		return (new);
	}
	return (NULL);
}
