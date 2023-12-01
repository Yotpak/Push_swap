/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaputils5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:51:10 by tbalci            #+#    #+#             */
/*   Updated: 2023/12/02 00:45:38 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	countfunca(t_data *datas, int index)
{
	datas->ra_c = 0;
	datas->rra_c = 0;
	if (index <= (datas->a_l / 2))
	{
		while (index--)
			datas->ra_c++;
	}
	else
	{
		index = datas->a_l - index;
		while (index--)
			datas->rra_c++;
	}
}

void	countfuncb(t_data *datas, int index)
{
	datas->rb_c = 0;
	datas->rrb_c = 0;
	if (index <= (datas->b_l / 2))
	{
		while (index--)
			datas->rb_c++;
	}
	else
	{
		index = datas->b_l - index;
		while (index--)
			datas->rrb_c++;
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
	mcountinit(datas);
	j = minmove(datas);
	if (datas->a_l / 2 >= j)
	{
		while (j--)
			ra(datas);
	}
	else
	{
		j = datas->a_l - j;
		while (j--)
			rra(datas);
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
