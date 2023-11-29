/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:46:36 by tbalci            #+#    #+#             */
/*   Updated: 2023/11/28 19:24:41 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

// void	mainregulator(t_data *datas, int i)
// {
	
// }


void print_stacks(t_data *datas)
{
	int i = 1;
	printf("	STACK A		\n---------------------\n");
	while (i <= datas->a_l)
	{
		printf("%d. index -> %d\n", i - 1, datas->a[i-1]);
		i++;
	}

	i = 1;
	printf("	STACK B		\n---------------------\n");
	while (i <= datas->b_l)
	{
		printf("%d. index -> %d\n", i - 1, datas->b[i-1]);
		i++;
	}
}

void	mcountprintf(t_data *datas)
{
	int	i = 1;
	while (datas->a_l > i)
	{
		printf("%d. index %d\n",i - 1,datas->mcount[i - 1]);
		i++;
	}
}

int main(int ac, char **av)
{
	t_data	*datas;
	int	i;

	i = 0;
	datas = malloc(sizeof(t_data));
	init_stack(av, datas, ac);
	pb(datas);
	pb(datas);
	while (datas->a_l != 0)
	{
		mcountinit(datas);
		mcountprintf(datas);
		regfunc(datas);
	}
	print_stacks(datas);
	b_regulator2(datas);
	print_stacks(datas);
}
