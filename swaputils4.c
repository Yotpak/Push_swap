/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaputils4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 22:44:29 by tbalci            #+#    #+#             */
/*   Updated: 2023/11/28 14:22:43 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	first(t_data *datas, int index)
{
	if ((datas->a_l / 2) >= index)
		return (index);
	else
		return (datas->a_l - index);
}

int	second(t_data *datas, int index)
{
	if ((datas->b_l / 2) >= index)
		return (index);
	else
		return (datas->b_l - index);
}

int	minmove(t_data *datas)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = 0;
	temp = datas->mcount[0];
	while (datas->a_l > i)
	{
		if (temp > datas->mcount[i])
		{
			temp = datas->mcount[i];
			j = i;
		}
		i++;
	}
	return (j);
}
