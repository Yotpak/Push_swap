/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorfunc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 01:48:02 by tbalci            #+#    #+#             */
/*   Updated: 2023/12/09 15:46:22 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
 
void	errorfunc(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	exit(1);
}

void	free_str(char **str)
{
	int	i;

	i = -1;
	while (str[++i])
		free(str[i]);
	free(str);
}

void	free_argv(char *argv)
{
	free(argv);
	errorfunc("Error");
}

char	*ft_args(t_data *s, char **av, int ac)
{
	char	**str;
	char	*chr;
	int		j;

	j = 1;
	chr = ft_strdup("");
	while (j < ac)
	{
		chr = ft_strjoin2(chr, av[j]);
		chr = ft_strjoin2(chr, " ");
		j++;
	}
	str = ft_split(chr, ' ');
	init_stack(s, av, str);
	free_str(str);
	return (chr);
}

void	ft_checkerror(t_data *s, int ac, char **av)
{
	char	*argv;
	int		i;

	i = -1;
	argv = ft_args(s, av, ac);
	while (argv[++i])
	{
		if (!is_pushswap(argv[i]))
			free_argv(argv);
	}
	i = 0;
	while (argv[i])
	{
		if (argv[i] == '+' || argv[i] == '-')
		{
			if (!ft_isdigit(argv[i + 1]))
				free_argv(argv);
		}
		if (ft_isdigit(argv[i]))
			if (argv[i + 1] == '-' || argv[i + 1] == '+')
				free_argv(argv);
		i++;
	}
	free(argv);
}
