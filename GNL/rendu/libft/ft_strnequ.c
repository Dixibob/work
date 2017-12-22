/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:21:16 by mpasquie          #+#    #+#             */
/*   Updated: 2017/11/13 14:24:35 by mpasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char	*s12;
	char	*s22;

	if (s1 && s2)
	{
		s12 = (char *)s1;
		s22 = (char *)s2;
		while (n--)
		{
			if (*s12 != *s22)
				return (0);
			s12++;
			s22++;
		}
		return (1);
	}
	return (0);
}
