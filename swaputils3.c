/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaputils3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 01:20:35 by tbalci            #+#    #+#             */
/*   Updated: 2023/11/21 04:02:25 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_data *datas)
{
	int	temp;
	int	i;

	i = datas->ac - 1;
	temp = datas->a[datas->ac - 1];
	while (0 < i)
	{
		datas->a[i] = datas->a[i - 1];
		i--;
	}
	datas->a[0] = temp;
	i = datas->ac - 1;
	temp = datas->b[i];
	while (i > 0)
	{
		datas->b[i] = datas->b[i - 1];
		i--;
	}
	datas->b[0] = temp;
	write(1, "rrr\n", 4);
}

void	bmin(t_data *datas)
{
	int	i;

	i = 0;
	datas->b_min = datas->b[0];
	while (i < datas->b_l)
	{
		if (datas->b[i] < datas->b_min)
			datas->b_min = datas->b[i];
		i++;
	}
}

int	ftl(t_data *datas, int index)	
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	temp = datas->b_min;
	while (datas->b_l > i)
	{
		if (temp < datas->b[i] && index > datas->b[i])
		{
			temp = datas->b[i];
			j = i;
		}
		i++;
	}
	return (j);
}

int	ftm(t_data *datas)
{
	int	i;
	int	j;
	int	temp;

	temp = datas->b[0];
	i = 0;
	j = 0;
	while (i < datas->b_l)
	{
		if (temp < datas->b[i])
		{
			temp = datas->b[i];		
			j = i;
		}
		i++;
	}
	return (j);
}

void	mcountinit(t_data *datas)
{
	int	i;
	int	temp_i;
	int	temp_m;

	i = 0;
	while (i < datas->a_l)
	{
		bmin(datas);
		if (datas->a[i] > datas->b_min)
		{
			temp_i = ftl(datas, datas->a[i]);
			datas->mcount[i] = first(datas, i) + 1 + second(datas, temp_i);
		}
		else
		{
			temp_m = ftm(datas);
			datas->mcount[i] = first(datas, i) + 1 + second(datas, temp_m);	
		}
		i++;
	}
	datas->m = minmove(datas);
}