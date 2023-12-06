/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:17:08 by tbalci            #+#    #+#             */
/*   Updated: 2023/12/06 17:56:27 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting(t_data *datas)
{
	int	i;
	int	j;

	mcountinit(datas);
	i = minmove(datas);
	j = indexfuncb(datas);
	countfunca(datas, i);
	countfuncb(datas, j);
	while (datas->ra_c != 0 && datas->rb_c != 0)
	{
		rr(datas);
		datas->ra_c--;
		datas->rb_c--;
	}
}

void	sortingrrr(t_data *datas)
{
	int	i;
	int	j;

	mcountinit(datas);
	i = minmove(datas);
	j = indexfuncb(datas);
	countfunca(datas, i);
	countfuncb(datas, j);
	while (datas->rra_c != 0 && datas->rrb_c != 0)
	{
		rrr(datas);
		datas->rra_c--;
		datas->rrb_c--;
	}
}

int	rrmovement(t_data *datas, int i, int temp_i)
{
	int	q;

	q = 0;
	countfunca(datas, i);
	countfuncb(datas, temp_i);
	while (datas->rra_c != 0 && datas->rrb_c != 0)
	{
		datas->rra_c--;
		datas->rrb_c--;
		q++;
	}
	while (datas->ra_c != 0 && datas->rb_c != 0)
	{
		datas->ra_c--;	
		datas->rb_c--;
		q++;
	}
	return (q);
}

int	atoi_ft(char *str)
{
	int			a;
	int			sign;
	long long	result;
	long long	temp;

	a = 0;
	result = 0;
	sign = 1;
	while (str[a] == ' ' || (str[a] >= 9 && str[a] <= 13))
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			sign = sign * -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		result = (result * 10) + (str[a] - '0');
		temp = result * sign;
		if (temp >= 2147483647 || temp <= -2147483648)
			errorfunc("Error");
		a++;
	}
	return (result * sign);
}

