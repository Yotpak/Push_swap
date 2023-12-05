/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:47:51 by tbalci            #+#    #+#             */
/*   Updated: 2023/12/05 02:29:56 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a_regulator(t_data *datas)
{
	int	i;

	i = 0;
	while (i < datas->a_l)
	{
		datas->a[i] = datas->a[i + 1];
		i++;
	}
}

void	b_regulator(t_data *datas)
{
	int	i;

	i = 0;
	while (i < datas->b_l)
	{
		datas->b[i] = datas->b[i + 1];
		i++;
	}
}

int	dp_wc(char **s)
{
	int	word_number;
	int	i;
	int	j;

	j = 0;
	i = 0;
	word_number = 0;
	while (s[i])
	{
		j = 0;
		while (s[i][j] != '\0' && s[i][j] == ' ')
		{
			j++;
		}
		while (s[i][j])
		{
			while (s[i][j] != '\0' && s[i][j] != ' ')
				j++;
			word_number++;
			while (s[i][j] != '\0' && s[i][j] == ' ')
				j++;
		}
		i++;
	}
	return (word_number);
}

char	*ft_strjoin2(char *s1, char *s2)
{
	char	*str;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len + 1);
	ft_strlcat(str, s2, len + 1);
	free(s1);
	return (str);
}

int	is_pushswap(int c)
{
	if (ft_isdigit(c) || c == '+' || c == '-' || c == ' ')
		return (1);
	return (0);
}