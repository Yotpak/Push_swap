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

int main(int ac, char **av)
{
	t_data	*datas;
	int	i;

	i = 0;
	datas = malloc(sizeof(t_data));
	init_stack(av, datas, ac);
	pb(datas);
	pb(datas);
	pb(datas);
	pb(datas);
	mcountinit(datas);
	printf("datas->m%d\n",datas->m);
	printf("%d\n",datas->mcount[0]);
	printf("%d\n",datas->mcount[1]);
	printf("%d\n",datas->mcount[2]);
	printf("%d\n",datas->mcount[3]);
	printf("%d\n",datas->mcount[4]);
	printf("%d\n",datas->mcount[5]);
	printf("%d\n",datas->mcount[6]);
	printf("%d\n",datas->mcount[7]);
}
