/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:46:36 by tbalci            #+#    #+#             */
/*   Updated: 2023/12/06 18:03:10 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	sort(t_data *datas)
{
	pb(datas);
	pb(datas);
	while (datas->a_l != 0)
	{
		sorting(datas);
		sortingrrr(datas);
		regfunc(datas);
	}
	b_regulator2(datas);
	while (datas->b_l != 0)
		pa(datas);
}

void	dupcontrol(t_data *datas)
{
	int	i;
	int	j;

	i = 0;
	while (datas->a_l > i)
	{
		j = i + 1;
		while (datas->a_l > j)
		{	
			if (datas->a[i] == datas->a[j])
				errorfunc("Error");
			j++;
		}
		i++;
	}
}

int	sortcontrol(t_data *datas)
{
	int	i;
	
	i = 0;
	while (datas->a_l - 1 > i)
	{
		if (datas->a[i] > datas->a[i + 1])
			return (1);
		i++;
	}
	return (0);
}

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
	while (datas->a_l >= i)
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
	ft_checkerror(datas, ac, av);
	dupcontrol(datas);
	if (sortcontrol(datas) == 0)
		return (0);
	sort(datas);
	// print_stacks(datas);
}
