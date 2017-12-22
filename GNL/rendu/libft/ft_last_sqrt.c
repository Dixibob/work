/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_sqrt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 14:19:23 by cpalmier          #+#    #+#             */
/*   Updated: 2017/11/28 14:26:38 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_last_sqrt(int nb)
{
	int	racine;

	racine = 1;
	while (racine * racine < nb)
		racine++;
	if (racine * racine == nb)
		return (racine);
	else
		return (ft_last_sqrt(nb - 1));
}
