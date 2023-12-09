/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:46:36 by tbalci            #+#    #+#             */
/*   Updated: 2023/12/08 21:00:18 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_data *s)
{
	if (s->a_l > 5)
	{
		pb(s);
		pb(s);
		while (s->a_l != 0)
		{
			sorting(s);
			sortingrrr(s);
			regfunc(s);
		}
		reset_b(s);
		while (s->b_l != 0)
			pa(s);
	}
	else;
	{
		littlesort(s);
	}
}

void	dupcontrol(t_data *s)
{
	int	i;
	int	j;

	i = 0;
	while (s->a_l > i)
	{
		j = i + 1;
		while (s->a_l > j)
		{	
			if (s->a[i] == s->a[j])
				errorfunc("Error");
			j++;
		}
		i++;
	}
}

int	sortcontrol(t_data *s)
{
	int	i;
	
	i = 0;
	while (s->a_l - 1 > i)
	{
		if (s->a[i] > s->a[i + 1])
			return (1);
		i++;
	}
	return (0);
}

void print_stacks(t_data *s)
{
	int i = 1;
	printf("	STACK A		\n---------------------\n");
	while (i <= s->a_l)
	{
		printf("%d. index -> %d\n", i - 1, s->a[i-1]);
		i++;
	}

	i = 1;
	printf("	STACK B		\n---------------------\n");
	while (i <= s->b_l)
	{
		printf("%d. index -> %d\n", i - 1, s->b[i-1]);
		i++;
	}
}

void	mcountprintf(t_data *s)
{
	int	i = 1;
	while (s->a_l >= i)
	{
		printf("%d. index %d\n",i - 1,s->mcount[i - 1]);
		i++;
	}
}

int main(int ac, char **av)
{
	t_data	*s;
	int	i;

	i = 0;
	s = malloc(sizeof(t_data));
	ft_checkerror(s, ac, av);
	dupcontrol(s);
	if (sortcontrol(s) == 0)
		return (0);
	sort(s);
	// print_stacks(s);
}
