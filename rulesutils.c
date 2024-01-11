/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rulesutils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:04:55 by tbalci            #+#    #+#             */
/*   Updated: 2023/12/09 15:21:16 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_data *s)
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
	i = s->b_l;
	temp = s->b[i - 1];
	while (i > 0)
	{
		s->b[i] = s->b[i - 1];
		i--;
	}
	s->b[0] = temp;
	write(1, "rrr\n", 4);
}

void	a_regulator(t_data *s)
{
	int	i;

	i = 0;
	while (i < s->a_l)
	{
		s->a[i] = s->a[i + 1];
		i++;
	}
}

void	b_regulator(t_data *s)
{
	int	i;

	i = 0;
	while (i < s->b_l)
	{
		s->b[i] = s->b[i + 1];
		i++;
	}
}
