/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 01:19:35 by tbalci            #+#    #+#             */
/*   Updated: 2023/12/09 15:28:26 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"

typedef struct s_data
{
	int		*a;
	int		*b;
	int		a_l;
	int		b_l;
	int		*mcount;
	int		b_min;
	int		b_max;
	int		m;
	int		ra_c;
	int		rra_c;
	int		rb_c;
	int		rrb_c;
}			t_data;

void	init_stack(t_data *s, char **av, char **str);
void	mainregulator(t_data *s, int i);
void	init_all(t_data *s, char **av);
void	sa(t_data *s);
void	sb(t_data *s);
void	ss(t_data *s);
void	pa(t_data *s);
void	pb(t_data *s);
void	ra(t_data *s);
void	rb(t_data *s);
void	rr(t_data *s);
void	rra(t_data *s);
void	rrb(t_data *s);
void	rrr(t_data *s);
void	countfunca(t_data *s, int index);
void	countfuncb(t_data *s, int index);
int		ftm(t_data *s);
int		ftl(t_data *s, int index);
void	errorfunc(char *str);
void	bmin(t_data *s);
void	mcountinit(t_data *s);
void	a_regulator(t_data *s);
void	b_regulator(t_data *s);
int		second(t_data *s, int index);
int		minmove(t_data *s);
int		first(t_data *s, int index);
void	regfunc(t_data *s);
int		minmoveb(t_data *s);
void	bmax(t_data *s);
void	regfuncb(t_data *s);
void	reset_b(t_data *s);
void	sorting(t_data *s);
int		rrmovement(t_data *s, int i, int temp_i);
void	sortingrrr(t_data *s);
void	ft_checkerror(t_data *s, int ac, char **av);
char	*ft_args(t_data *s, char **av, int ac);
int		dp_wc(char **s);
char	*ft_strjoin2(char *s1, char *s2);
int		is_pushswap(int c);
void	ltsort(t_data *s);
void	free_str(char **str);
void	free_argv(char *argv);
void	dupcontrol(t_data *s);
int		sortcontrol(t_data *s);
int		atoi_ft(char *str);
void	littlesort(t_data *s);
void	littlesorttwo(t_data *s);
void	littlesortthree(t_data *s);
void	littlesortfour(t_data *s);
void	littlesortfive(t_data *s);
int		a_min(t_data *s);

#endif