/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   longest_way.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 18:24:04 by cosney            #+#    #+#             */
/*   Updated: 2020/04/10 13:14:50 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

struct s_index
{
	int		i;
	int		j;
	int		k;
}ind;

void	longest_way(char *str)
{
	char	tr[500];
	char	tmp[500];

	ind.i = 1;
	ind.j = 0;
	zeros(tr, 500);
	zeros(tmp, 500);
	while (str[ind.i] != '\0')
	{
		ind.k = 0;
		while (str[ind.i] >= '0' && str[ind.i] <= '9')
		{
			tr[ind.k] = str[ind.i];
			ind.i++;
			ind.k++;
		}
		if (ft_strlen(tr) > ind.j)
		{
			ft_strcpy(tmp, tr);
			ind.j = ft_strlen(tr);
		}
		ind.i++;
	}
	display_way(tmp);
	write(1, "\n", 1);
}
