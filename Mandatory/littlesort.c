/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   littlesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:51:34 by tbalci            #+#    #+#             */
/*   Updated: 2023/12/08 21:04:24 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	littlesorttwo(t_data *s)
{
	if (s->a[0] > s->a[1])
		sa(s);
}

void	littlesortthree(t_data *s)
{
	if (s->a[0] < s->a[1] && s->a[1] < s->a[2])
		return ;
	if (s->a[0] < s->a[1])
	{
		if (s->a[0] > s->a[2])
			rra(s);
		else
		{
			rra(s);
			sa(s);
		}
	}
	else
	{
		if (s->a[0] < s->a[2])
			sa(s);
		else if (s->a[1] < s->a[2])
			ra(s);
		else
		{
			sa(s);
			rra(s);
		}
	}
}


void	littlesortfour(t_data *s)
{
	while (a_min(s) != 0)
	{
		if (a_min(s) == 1)
			ra(s);
		else if (a_min(s) == 2)
			rra(s);
		else if (a_min(s) == 3)
			rra(s);
	}
	pb(s);
	littlesortthree(s);
	pa(s);
}

void	littlesortfive(t_data *s)
{
	while (a_min(s) != 0)
	{
		if (a_min(s) >= 2)
			rra(s);
		else
			ra(s);
	}
	pb(s);
	littlesortfour(s);
	pa(s);
}

void	littlesort(t_data *s)
{
	if (s->a_l == 2)
		littlesorttwo(s);
	else if (s->a_l == 3)
		littlesortthree(s);
	else if (s->a_l == 4)
		littlesortfour(s);
	else if (s->a_l == 5)
		littlesortfive(s);
	free(s->b);
	free(s->a);
	free(s);
	exit(0);
}