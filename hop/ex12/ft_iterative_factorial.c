/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecelsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:54:08 by ecelsa            #+#    #+#             */
/*   Updated: 2019/09/05 21:21:52 by ecelsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int x;

	i = 1;
	x = 1;
	if (nb < 0)
		return (0);
	while (x <= nb)
	{
		i *= x;
		x++;
	}
	return (i);
}
