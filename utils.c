/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:47:51 by tbalci            #+#    #+#             */
/*   Updated: 2023/11/19 15:29:58 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a_regulator(t_data *datas)
{
	int	i;

	i = 0;
	while (i < datas->a_l)
	{
		datas->a[i] = datas->a[i + 1];
		i++;
	}
}

void	b_regulator(t_data *datas)
{
	int	i;

	i = 0;
	while (i < datas->b_l)
	{
		datas->b[i] = datas->b[i + 1];
		i++;
	}
}