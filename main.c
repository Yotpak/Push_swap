/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:46:36 by tbalci            #+#    #+#             */
/*   Updated: 2023/11/21 04:07:00 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

// void	mainregulator(t_data *datas, int i)
// {
	
// }


void print_stacks(t_data *data)
{
	int i = 1;
	printf("	STACK A		\n---------------------\n");
	while (i <= data->a_l)
	{
		printf("%d. index -> %d\n", i - 1, data->a[i-1]);
		i++;
	}

	i = 1;
	printf("	STACK B		\n---------------------\n");
	while (i <= data->b_l)
	{
		printf("%d. index -> %d\n", i - 1, data->b[i-1]);
		i++;
	}
}

int main(int ac, char **av)
{
	t_data	*datas;

	datas = malloc(sizeof(t_data));
	init_stack(av, datas, ac);
	mcountinit(datas);
	print_stacks(datas);
}
