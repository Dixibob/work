/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:55:56 by mpasquie          #+#    #+#             */
/*   Updated: 2017/11/08 10:56:00 by mpasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*ans;
	int	i;

	if (max <= min)
		return (0);
	ans = (int *)malloc((max - min) * sizeof(int));
	if (!ans)
		return (0);
	i = -1;
	while (++i < max - min)
		ans[i] = i + min;
	return (ans);
}
