/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:29:06 by tbalci            #+#    #+#             */
/*   Updated: 2023/12/09 15:46:39 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
 
void	sa(t_data *s)
{
	int	temp;

	temp = s->a[0];
	s->a[0] = s->a[1];
	s->a[1] = temp;
	write(1, "sa\n", 3);
}

void	sb(t_data *s)
{
	int	temp;

	temp = s->b[0];
	s->b[0] = s->b[1];
	s->b[1] = temp;
	write(1, "sb\n", 3);
}

void	ss(t_data *s)
{
	int	temp;
	int	temp2;

	temp = s->a[0];
	s->a[0] = s->a[1];
	s->a[1] = temp;
	temp2 = s->b[0];
	s->b[0] = s->b[1];
	s->b[1] = temp2;
	write(1, "ss\n", 3);
}

void	pa(t_data *s)
{
	int	i;

	if (s->b_l == 0)
		return ;
	i = s->a_l;
	if (s->a_l == 0)
	{
		s->a[0] = s->b[0];
	}
	else
	{
		while (i > 0)
		{
			s->a[i] = s->a[i - 1];
			i--;
		}
		s->a[0] = s->b[0];
	}
	b_regulator(s);
	s->a_l++;
	s->b_l--;
	write(1, "pa\n", 3);
}

void	pb(t_data *s)
{
	int	i;

	if (s->a_l == 0)
		return ;
	i = s->b_l;
	if (s->b_l == 0)
	{
		s->b[0] = s->a[0];
	}
	else
	{
		while (i > 0)
		{
			s->b[i] = s->b[i - 1];
			i--;
		}
		s->b[0] = s->a[0];
	}
	a_regulator(s);
	s->a_l--;
	s->b_l++;
	write(1, "pb\n", 3);
}
