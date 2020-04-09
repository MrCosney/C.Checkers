/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   longest_way.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 18:24:04 by cosney            #+#    #+#             */
/*   Updated: 2020/04/09 13:23:23 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "header.h"

struct index
{
	int i;
	int j;
	int k;
}ind;

void	longest_way(char *str)
{
	char	tr[a_size];
	char	tmp[a_size];

	ind.i = 1;
	ind.j = 0;
	zeros(tr, a_size);
	zeros(tmp, a_size);
	while (str[ind.i] != '\0')
	{	
		ind.k = 0;
		while (str[ind.i] >= '0' && str[ind.i] <= '9')
		{
			tr[ind.k] = str[ind.i];
			ind.i++;
			ind.k++;
		}
		if (strlen(tr) > ind.j)
		{
			strcpy(tmp, tr);
			ind.j = strlen(tr);
		}
		ind.i++;
	}
	display_way(tmp);
	write(1, "\n", 1);
}
