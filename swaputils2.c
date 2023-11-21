/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaputils2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:46:26 by tbalci            #+#    #+#             */
/*   Updated: 2023/11/08 01:20:18 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_data *datas)
{
	int	temp;
	int	i;
	
	i = 0;
	temp = datas->a[0];
	while (datas->ac - 1 > i)
	{
		datas->a[i] = datas->a[i + 1];
		i++;
	}
	datas->a[i] = temp;
	write(1, "ra\n", 3);
}

void	rb(t_data *datas)
{
	int	temp;
	int	i;
	
	i = 0;
	temp = datas->b[0];
	while (datas->ac - 1 > i)
	{
		datas->b[i] = datas->b[i + 1];
		i++;
	}
	datas->b[i] = temp;
	write(1, "rb\n", 3);
}

void	rr(t_data *datas)
{
	int	temp;
	int	i;
	
	i = 0;
	temp = datas->b[0];
	while (datas->ac - 1 > i)
	{
		datas->b[i] = datas->b[i + 1];
		i++;
	}
	datas->b[i] = temp;
	i = 0;
	temp = datas->a[0];
	while (datas->ac - 1 > i)
	{
		datas->a[i] = datas->a[i + 1];
		i++;
	}
	datas->a[i] = temp;
	write(1, "rr\n", 3);	
}

void	rra(t_data *datas)
{
	int	temp;
	int	i;

	i = datas->ac - 1;
	temp = datas->a[datas->ac - 1];
	while (0 < i)
	{
		datas->a[i] = datas->a[i - 1];
		i--;
	}
	datas->a[0] = temp;
	write(1, "rra\n", 4);
}

void	rrb(t_data *datas)
{
	int	temp;
	int	i;

	i = datas->ac - 1;
	temp = datas->b[i];
	while (i > 0)
	{
		datas->b[i] = datas->b[i - 1];
		i--;
	}
	datas->b[0] = temp;
	write(1, "rrb\n", 4);
}