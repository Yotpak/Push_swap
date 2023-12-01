/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:17:08 by tbalci            #+#    #+#             */
/*   Updated: 2023/12/01 17:49:45 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	countra(t_data *datas, int index)
{
	int	ra_c;

	ra_c = 0;
	if ((datas->a_l / 2) >= index)
	{
		while (index)
		{
			ra_c++;
			index--;
		}
		return (ra_c);	
	}
	else
		return (0);
}

int	countrra(t_data *datas, int index)
{
	int	rra_c;

	rra_c = 0;
	if ((datas->a_l / 2) < index)
	{
		while (index)
		{
			rra_c++;
			index--;
		}
		return (datas->a_l - rra_c);
	}
	else
		return (0);
}

int	countrb(t_data *datas, int index)
{
	int	rb_c;
	
	rb_c = 0;
	if ((datas->b_l / 2) >= index)
	{
		while (index)
		{
			rb_c++;
			index--;
		}
		return (rb_c);	
	}
	else
		return (0);
}

int	countrrb(t_data *datas, int index)
{
	int	rrb_c;
	
	rrb_c = 0;
	if ((datas->b_l / 2) < index)
	{
		while (index)
		{
			rrb_c++;
			index--;
		}
		return (datas->b_l - rrb_c);
	}
	else
		return (0);
}

void	sorting(t_data *datas, int index)
{
	int	ra_c;
	int	rra_c;
	int	rb_c;
	int	rrb_c;
	
	ra_c = countra(datas, index);
	rra_c = countrra(datas, index);
	rb_c = countrb(datas, index);
	rrb_c = countrrb(datas, index);
	if (ra_c != 0 && rb_c != 0)
	{
		while (ra_c != 0 && rb_c != 0)
		{
			rr(datas);
			ra_c--;
			rb_c--;
		}
	}
	else if (rra_c != 0 && rrb_c != 0)
	{
		while (rra_c != 0 && rrb_c != 0)
		{
			rrr(datas);
			rra_c--;
			rrb_c--;
		}
	}
}