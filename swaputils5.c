/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaputils5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:51:10 by tbalci            #+#    #+#             */
/*   Updated: 2023/12/01 19:05:45 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	countfunca(t_data *datas, int index)
{
	datas->ra_c = 0;
	datas->rra_c = 0;
	while (index)
	{
		if (index <= (datas->a_l / 2))
			datas->ra_c++;
		else
			datas->rra_c++;
		index--;
	}
}

void	countfuncb(t_data *datas, int index)
{
	datas->rb_c = 0;
	datas->rrb_c = 0;
	while (index)
	{
		if (index <= (datas->b_l / 2))
			datas->rb_c++;
		else
			datas->rrb_c++;
		index--;
	}
}

int	indexfuncb(t_data *datas)
{
	int	i;
	int	j;

	i = 0;
	mcountinit(datas);
	j = minmove(datas);
	bmin(datas);
	if (datas->a[j] > datas->b_min)
	{
		i = ftl(datas, datas->a[j]);
	}
	else
	{
		i = ftm(datas);
	}
	return (i);
}

void	regfunc(t_data *datas)
{
	int	i;
	int	j;

	i = 0;
	j = minmove(datas);
	if (datas->a_l / 2 >= j)
	{
		while (j != 0)
		{
			ra(datas);
			j--;
		}
	}
	else
	{
		j = datas->a_l - j;
		while (j != 0)
		{
			rra(datas);
			j--;
		}
	}
	regfuncb(datas);
	pb(datas);
}


void	regfuncb(t_data *datas)
{
	int	i;
	int	j;

	i = 0;
	j = indexfuncb(datas);
	if (datas->b_l / 2 >= j)
	{
		while (j != 0)
		{
			rb(datas);
			j--;
		}
	}
	else
	{
		j = datas->b_l - j;
		while (j != 0)
		{
			rrb(datas);
			j--;
		}
	}
}
