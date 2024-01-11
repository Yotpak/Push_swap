/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movementcounter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 01:20:35 by tbalci            #+#    #+#             */
/*   Updated: 2023/12/09 15:18:37 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rrmovement(t_data *s, int i, int temp_i)
{
	int	q;

	q = 0;
	countfunca(s, i);
	countfuncb(s, temp_i);
	while (s->rra_c != 0 && s->rrb_c != 0)
	{
		s->rra_c--;
		s->rrb_c--;
		q++;
	}
	while (s->ra_c != 0 && s->rb_c != 0)
	{
		s->ra_c--;
		s->rb_c--;
		q++;
	}
	return (q);
}

int	ftl(t_data *s, int index)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	temp = s->b_min;
	while (s->b_l > i)
	{
		if (temp <= s->b[i] && index > s->b[i])
		{
			temp = s->b[i];
			j = i;
		}
		i++;
	}
	return (j);
}

int	ftm(t_data *s)
{
	int	i;
	int	j;
	int	temp;

	temp = s->b[0];
	i = 0;
	j = 0;
	while (i < s->b_l)
	{
		if (temp < s->b[i])
		{
			temp = s->b[i];
			j = i;
		}
		i++;
	}
	return (j);
}

void	mcountinit(t_data *s)
{
	int	i;
	int	temp_i;
	int	temp_m;

	i = 0;
	while (s->a_l >= i)
	{
		bmin(s);
		if (s->a[i] > s->b_min)
		{
			temp_i = ftl(s, s->a[i]);
			s->mcount[i] = first(s, i) + 1 + second(s, temp_i)
				- rrmovement(s, i, temp_i);
		}
		else
		{
			temp_m = ftm(s);
			s->mcount[i] = first(s, i) + 1 + second(s, temp_m);
		}
		i++;
	}
	s->m = minmove(s);
}
