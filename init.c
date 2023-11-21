/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:17:08 by tbalci            #+#    #+#             */
/*   Updated: 2023/11/21 02:30:00 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>


void	init_all(t_data *datas, int ac)
{
	datas->a = ft_calloc(sizeof(int), ac - 1);
	datas->b = ft_calloc(sizeof(int), ac - 1);
	datas->a_l = ac - 1;
	datas->mcount = calloc(sizeof(int), datas->a_l - 2);
	datas->b_l = 0;
	datas->ac = ac - 1;
	bmin(datas);
	datas->rb_c = 0;
	datas->rrb_c = 0;
	// datas->mc = 0;
}

void	init_stack(char **av, t_data *datas, int ac)
{
	int	i;
	
	i = 0;
	init_all(datas, ac);
	while (i < ac - 1)
	{
		datas->a[i] = ft_atoi(av[i + 1]);
		i++;
	}
}