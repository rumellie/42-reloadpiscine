/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecelsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 22:59:55 by ecelsa            #+#    #+#             */
/*   Updated: 2019/07/11 17:16:01 by ecelsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *rs;

	if (min >= max)
		return (NULL);
	rs = (int*)malloc(sizeof(int) * (max - min));
	i = min;
	while (i < max)
	{
		rs[i - min] = i;
		i++;
	}
	return (rs);
}
