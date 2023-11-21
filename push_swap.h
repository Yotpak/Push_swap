/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 01:19:35 by tbalci            #+#    #+#             */
/*   Updated: 2023/11/19 15:37:11 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"
#include <stdio.h>

typedef struct s_data
{
	int		*a;
	int		*b;
	int		a_l;
	int		b_l;
	int		ac;
	int		*mcount;
	int		mc;
	int		b_min;
	int		m;
	int		ra_c;
	int		rra_c;
	int		rb_c;
	int		rrb_c;
}			t_data;

void	init_stack(char **av, t_data *datas, int ac);
void	mainregulator(t_data *datas, int i);
void	init_all(t_data *datas, int ac);
void	sa(t_data *datas);
void	sb(t_data *datas);
void	ss(t_data *datas);
void	pa(t_data *datas);
void	pb(t_data *datas);
void	ra(t_data *datas);
void	rb(t_data *datas);
void	rr(t_data *datas);
void	rra(t_data *datas);
void	rrb(t_data *datas);
void	rrr(t_data *datas);
void	countfunca(t_data *datas, int index);
void	countfuncb(t_data *datas, int index);
int		ftm(t_data *datas);
int		ftl(t_data *datas, int index);
void	errorfunc(char *str);
void	bmin(t_data *datas);
void	mcountinit(t_data *datas);
void	a_regulator(t_data *datas);
void	b_regulator(t_data *datas);
int		second(t_data *datas, int index);
int		minmove(t_data *datas);
int		first(t_data *datas, int index);
int		ft_args(t_data *datas, char **av);

#endif