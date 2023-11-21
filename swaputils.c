/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaputils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:29:06 by tbalci            #+#    #+#             */
/*   Updated: 2023/11/03 03:57:40 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
# include <stdio.h>

void	sa(t_data *datas)
{
	int	temp;
	
	temp = datas->a[0];
	datas->a[0] = datas->a[1];
	datas->a[1] = temp;
	write(1, "sa\n", 3);
}

void	sb(t_data *datas)
{
	int	temp;
	
	temp = datas->b[0];
	datas->b[0] = datas->b[1];
	datas->b[1] = temp;
	write(1, "sb\n", 3);
}

void	ss(t_data *datas)
{
	int	temp;
	int	temp2;
	
	temp = datas->a[0];
	datas->a[0] = datas->a[1];
	datas->a[1] = temp;
	temp2 = datas->b[0];
	datas->b[0] = datas->b[1];
	datas->b[1] = temp2;
	write(1, "ss\n", 3);
}

void	pa(t_data *datas)
{
	int	i;

	if (datas->b_l == 0)
		return ;
	i = datas->a_l;
	if (datas->a_l == 0)
	{
		datas->a[0] = datas->b[0];
	}
	else
	{
		while (i > 0)
		{
			datas->a[i] = datas->a[i - 1];
			i--;
		}
		datas->a[0] = datas->b[0];
	}
	b_regulator(datas);
	datas->a_l++;
	datas->b_l--;
	write(1, "pa\n", 3);
}

void	pb(t_data *datas)
{
	int	i;
	
	if (datas->a_l == 0)
		return ;
	i = datas->b_l;
	if (datas->b_l == 0)
	{
		datas->b[0] = datas->a[0];
	}
	else
	{
		while (i > 0)
		{
			datas->b[i] = datas->b[i - 1];
			i--;
		}
		datas->b[0] = datas->a[0];
	}
	a_regulator(datas);
	datas->a_l--;
	datas->b_l++;
	write(1, "pb\n", 3);
}
 