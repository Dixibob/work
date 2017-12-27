/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:59:37 by cpalmier          #+#    #+#             */
/*   Updated: 2017/11/20 12:37:12 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_cpy(char *dst, int j, const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		dst[j] = s[i];
		i++;
		j++;
	}
	return (dst);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		j;

	if (s1 && s2)
	{
		j = 0;
		dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) +
					ft_strlen(s2) + 1));
		if (dst == NULL)
			return (NULL);
		if (s1 != NULL)
		{
			dst = ft_cpy(dst, j, s1);
			j = ft_strlen(s1);
		}
		if (s2 != NULL)
		{
			dst = ft_cpy(dst, j, s2);
			j = j + ft_strlen(s2);
		}
		dst[j] = '\0';
		return (dst);
	}
	return (NULL);
}
