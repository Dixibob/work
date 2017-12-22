/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:31:52 by mpasquie          #+#    #+#             */
/*   Updated: 2017/11/15 09:18:58 by mpasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *cur;

	cur = (char *)s + ft_strlen((char *)s);
	while (*cur != c)
	{
		if (cur == s)
		{
			return (NULL);
		}
		cur--;
	}
	return (cur);
}
