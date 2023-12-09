/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regulate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:51:10 by tbalci            #+#    #+#             */
/*   Updated: 2023/12/09 15:46:35 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
 
int	minmoveb(t_data *s)
{
	int	i;
	int	j;

	i = 0;
	mcountinit(s);
	j = minmove(s);
	bmin(s);
	if (s->a[j] > s->b_min)
	{
		i = ftl(s, s->a[j]);
	}
	else
	{
		i = ftm(s);
	}
	return (i);
}

void	regfunc(t_data *s)
{
	int	i;
	int	j;

	i = 0;
	mcountinit(s);
	j = minmove(s);
	if (s->a_l / 2 >= j)
	{
		while (j--)
			ra(s);
	}
	else
	{
		j = s->a_l - j;
		while (j--)
			rra(s);
	}
	regfuncb(s);
	pb(s);
}

void	regfuncb(t_data *s)
{
	int	i;
	int	j;

	i = 0;
	j = minmoveb(s);
	if (s->b_l / 2 >= j)
	{
		while (j != 0)
		{
			rb(s);
			j--;
		}
	}
	else
	{
		j = s->b_l - j;
		while (j != 0)
		{
			rrb(s);
			j--;
		}
	}
}

void	reset_b(t_data *s)
{
	int	i;
	int	j;

	i = 0;
	bmax(s);
	j = s->b_max;
	if (s->b_l / 2 >= j)
	{
		while (j != 0)
		{
			rb(s);
			j--;
		}
	}
	else
	{
		j = s->b_l - j;
		while (j != 0)
		{
			rrb(s);
			j--;
		}
	}
}
