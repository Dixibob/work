/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:55:04 by mpasquie          #+#    #+#             */
/*   Updated: 2017/11/13 14:50:20 by mpasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*s;
	int		i;
	int		l;

	l = ft_strlen((char *)s1);
	s = (char *)malloc(sizeof(char) * (l + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < l)
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
