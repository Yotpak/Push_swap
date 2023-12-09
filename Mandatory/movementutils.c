/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movementutils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 22:44:29 by tbalci            #+#    #+#             */
/*   Updated: 2023/12/08 20:53:50 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	first(t_data *s, int index)
{
	if ((s->a_l / 2) >= index)
		return (index);
	else
		return (s->a_l - index);
}

int	second(t_data *s, int index)
{
	if ((s->b_l / 2) >= index)
		return (index);
	else
		return (s->b_l - index);
}

int	minmove(t_data *s)
{
	int	temp;
	int	i;
	int	j;

	i = 1;
	j = 0;
	temp = s->mcount[0];
	while (s->a_l > i)
	{
		if (temp > s->mcount[i])
		{
			temp = s->mcount[i];
			j = i;
		}
		i++;
	}
	return (j);
}

void	bmax(t_data *s)
{
	int	i;
	int	temp;

	i = 1;
	temp = s->b[0];
	while (s->b_l > i)
	{
		if (s->b[i] > temp)
		{
			s->b_max = i;
			temp = s->b[i];
		}
		i++;
	}
}

void	bmin(t_data *s)
{
	int	i;

	i = 0;
	s->b_min = s->b[0];
	while (i < s->b_l)
	{
		if (s->b[i] < s->b_min)
			s->b_min = s->b[i];
		i++;
	}
}