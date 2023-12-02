/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:17:08 by tbalci            #+#    #+#             */
/*   Updated: 2023/12/02 00:56:06 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting(t_data *datas)
{
	int	i;
	int	j;

	mcountinit(datas);
	i = minmove(datas);
	j = indexfuncb(datas);
	countfunca(datas, i);
	countfuncb(datas, j);
	while (datas->ra_c != 0 && datas->rb_c != 0)
	{
		rr(datas);
		datas->ra_c--;
		datas->rb_c--;
	}
}

void	sortingrrr(t_data *datas)
{
	int	i;
	int	j;

	mcountinit(datas);
	i = minmove(datas);
	j = indexfuncb(datas);
	countfunca(datas, i);
	countfuncb(datas, j);
	while (datas->rra_c != 0 && datas->rrb_c != 0)
	{
		rrr(datas);
		datas->rra_c--;
		datas->rrb_c--;
	}
}

int	rrmovement(t_data *datas, int i, int temp_i)
{
	int	q;

	q = 0;
	countfunca(datas, i);
	countfuncb(datas, temp_i);
	while (datas->rra_c != 0 && datas->rrb_c != 0)
	{
		datas->rra_c--;
		datas->rrb_c--;
		q++;
	}
	while (datas->ra_c != 0 && datas->rb_c != 0)
	{
		datas->ra_c--;	
		datas->rb_c--;
		q++;
	}
	return (q);
}

