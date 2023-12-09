/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:46:26 by tbalci            #+#    #+#             */
/*   Updated: 2023/12/09 15:46:40 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
 
void	ra(t_data *s)
{
	int	temp;
	int	i;

	i = 0;
	temp = s->a[0];
	while (s->a_l > i)
	{
		s->a[i] = s->a[i + 1];
		i++;
	}
	i--;
	s->a[i] = temp;
	write(1, "ra\n", 3);
}

void	rb(t_data *s)
{
	int	temp;
	int	i;

	i = 0;
	temp = s->b[0];
	while (s->b_l > i)
	{
		s->b[i] = s->b[i + 1];
		i++;
	}
	i--;
	s->b[i] = temp;
	write(1, "rb\n", 3);
}

void	rr(t_data *s)
{
	int	temp;
	int	i;

	i = 0;
	temp = s->b[0];
	while (s->b_l > i)
	{
		s->b[i] = s->b[i + 1];
		i++;
	}
	i--;
	s->b[i] = temp;
	i = 0;
	temp = s->a[0];
	while (s->a_l > i)
	{
		s->a[i] = s->a[i + 1];
		i++;
	}
	i--;
	s->a[i] = temp;
	write(1, "rr\n", 3);
}

void	rra(t_data *s)
{
	int	temp;
	int	i;

	i = s->a_l;
	temp = s->a[s->a_l - 1];
	while (i > 0)
	{
		s->a[i] = s->a[i - 1];
		i--;
	}
	s->a[0] = temp;
	write(1, "rra\n", 4);
}

void	rrb(t_data *s)
{
	int	temp;
	int	i;

	i = s->b_l;
	temp = s->b[i - 1];
	while (i > 0)
	{
		s->b[i] = s->b[i - 1];
		i--;
	}
	s->b[0] = temp;
	write(1, "rrb\n", 4);
}
