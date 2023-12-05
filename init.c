/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:17:08 by tbalci            #+#    #+#             */
/*   Updated: 2023/12/05 03:06:27 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>


void	init_all(t_data *datas, char **av)
{
	datas->a_l = dp_wc(av) - 1;
	datas->b_l = 0;
	datas->a = malloc(sizeof(int) * datas->a_l);
	datas->b = malloc(sizeof(int) * datas->a_l);
	datas->mcount = malloc(sizeof(int) * datas->a_l);
}

void	init_stack(t_data *datas, char **av, char **str)
{
	int	i;
	
	i = 0;
	init_all(datas, av);
	while (datas->a_l > i)
	{
		datas->a[i] = ft_atoi(str[i]);
		i++;
	}
	i = 0;
	while (datas->a_l > i)
	{
		if (datas->a[i] >= 2147483647)
			errorfunc("Error");
		i++;
	}
}