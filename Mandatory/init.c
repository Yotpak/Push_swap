/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:17:08 by tbalci            #+#    #+#             */
/*   Updated: 2023/12/08 20:53:24 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>


void	init_all(t_data *s, char **av)
{
	s->a_l = dp_wc(av) - 1;
	s->b_l = 0;
	s->a = malloc(sizeof(int) * s->a_l);
	s->b = malloc(sizeof(int) * s->a_l);
	s->mcount = malloc(sizeof(int) * s->a_l);
}

void	init_stack(t_data *s, char **av, char **str)
{
	int	i;
	
	i = 0;
	init_all(s, av);
	while (s->a_l > i)
	{
		s->a[i] = atoi_ft(str[i]);
		i++;
	}
	i = 0;
	while (s->a_l > i)
	{
		if (s->a[i] >= 2147483647)
			errorfunc("Error");
		i++;
	}
}

void	countfunca(t_data *s, int index)
{
	s->ra_c = 0;
	s->rra_c = 0;
	if (index <= (s->a_l / 2))
	{
		while (index--)
			s->ra_c++;
	}
	else
	{
		index = s->a_l - index;
		while (index--)
			s->rra_c++;
	}
}

void	countfuncb(t_data *s, int index)
{
	s->rb_c = 0;
	s->rrb_c = 0;
	if (index <= (s->b_l / 2))
	{
		while (index--)
			s->rb_c++;
	}
	else
	{
		index = s->b_l - index;
		while (index--)
			s->rrb_c++;
	}
}