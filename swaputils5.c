/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaputils5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:51:10 by tbalci            #+#    #+#             */
/*   Updated: 2023/11/18 23:19:12 by tbalci           ###   ########.fr       */
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
