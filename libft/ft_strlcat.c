/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:16:57 by mpasquie          #+#    #+#             */
/*   Updated: 2017/11/13 11:28:37 by mpasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*pdst;
	const char	*psrc;
	size_t		n;
	size_t		dstlen;

	pdst = dst;
	psrc = src;
	n = size;
	while (*pdst != '\0' && n-- != 0)
		pdst++;
	dstlen = pdst - dst;
	n = size - dstlen;
	if (n == 0)
		return (dstlen + ft_strlen((char *)src));
	while (*psrc != '\0')
	{
		if (n != 1)
		{
			*pdst++ = *psrc;
			n--;
		}
		psrc++;
	}
	*pdst = '\0';
	return (dstlen + (psrc - src));
}
