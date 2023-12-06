/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 01:19:35 by tbalci            #+#    #+#             */
/*   Updated: 2023/12/06 17:54:05 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include "./libft/libft.h"
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
	int		b_max;
	int		m;
	int		ra_c;
	int		rra_c;
	int		rb_c;
	int		rrb_c;
	int		i;
	int		j;
}			t_data;

void	init_stack(t_data *datas, char **av, char **str);
void	mainregulator(t_data *datas, int i);
void	init_all(t_data *datas, char **av);
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
void	regfunc(t_data *datas);
int		indexfuncb(t_data *datas);
void	bmax(t_data *datas);
void	regfuncb(t_data *datas);
void	b_regulator2(t_data *datas);
void	sorting(t_data *datas);
int	rrmovement(t_data *datas, int i, int temp_i);
void	sortingrrr(t_data *datas);
void	ft_checkerror(t_data *datas, int ac, char **av);
char	*ft_args(t_data *datas, char **av, int ac);
int		dp_wc(char **s);
char	*ft_strjoin2(char *s1, char *s2);
int		is_pushswap(int c);

void	free_str(char **str);
void	free_argv(char *argv);
void	dupcontrol(t_data *datas);
int		sortcontrol(t_data *datas);
int		atoi_ft(char *str);


void	print_stacks(t_data *datas);
void	mcountprintf(t_data *datas);

#endif