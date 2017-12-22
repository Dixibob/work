/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:44:29 by mpasquie          #+#    #+#             */
/*   Updated: 2017/11/15 10:25:11 by mpasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*mappedstr;

	if (s == NULL || f == NULL)
		return (NULL);
	mappedstr = (char*)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (mappedstr == NULL)
		return (NULL);
	i = -1;
	while (s[++i])
	{
		mappedstr[i] = f(s[i]);
	}
	mappedstr[i] = '\0';
	return (mappedstr);
}
