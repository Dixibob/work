/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:55:04 by mpasquie          #+#    #+#             */
/*   Updated: 2017/11/08 12:43:08 by mpasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*cpy;
	char	*ans;
	char	*tmp;

	cpy = src - 1;
	while (*(++cpy))
		;
	ans = (char *)malloc(sizeof(char) * (cpy - src + 1));
	if (ans == NULL)
		return (NULL);
	cpy = src;
	tmp = ans;
	while (*cpy)
		*(tmp++) = *(cpy++);
	*tmp = 0;
	return (ans);
}
