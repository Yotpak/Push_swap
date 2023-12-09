/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:17:08 by tbalci            #+#    #+#             */
/*   Updated: 2023/12/09 15:46:45 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
 
void	sorting(t_data *s)
{
	int	i;
	int	j;

	mcountinit(s);
	i = minmove(s);
	j = minmoveb(s);
	countfunca(s, i);
	countfuncb(s, j);
	while (s->ra_c != 0 && s->rb_c != 0)
	{
		rr(s);
		s->ra_c--;
		s->rb_c--;
	}
}

void	sortingrrr(t_data *s)
{
	int	i;
	int	j;

	mcountinit(s);
	i = minmove(s);
	j = minmoveb(s);
	countfunca(s, i);
	countfuncb(s, j);
	while (s->rra_c != 0 && s->rrb_c != 0)
	{
		rrr(s);
		s->rra_c--;
		s->rrb_c--;
	}
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
