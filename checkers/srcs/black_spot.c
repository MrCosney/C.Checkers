/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   black_spot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 17:53:04 by cosney            #+#    #+#             */
/*   Updated: 2020/04/09 16:06:17 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>
#include <string.h>
#define pos_size 2

void	new_str_tmp(char *str_tmp)
{
	int		index;
	
	index = 0;
	while (str_tmp[index] != '\0')
	{
		index++;
	}
	str_tmp[index - 1] = '\0';
	str_tmp[index - 2] = '\0';
}

int		mv(char bd[][10], int x, int y, char *st, char *str_tmp)
{
	char 	a[pos_size];
	char 	b[pos_size];
	int 	index;
	int		z;

	zeros(a, pos_size);
	zeros(b, pos_size);
	a[0] = x + '0';
	b[0] = y + '0';
	strcat(str_tmp, a);
	strcat(str_tmp, b);
	if (bd[x + 1][y - 1] == 'b'	&& bd[x + 2][y - 2] == '.')
	{
		bd[x + 1][y - 1] = '#';
		mv(bd, x + 2, y - 2, st, str_tmp);
		bd[x + 1][y - 1] = 'b';
	}
	if (bd[x + 1][y + 1] == 'b'	&& bd[x + 2][y + 2] == '.')	
	{
		bd[x + 1][y + 1] = '#';
		mv(bd, x + 2, y + 2, st,  str_tmp);
		bd[x + 1][y + 1] = 'b';
	}
	strcat(st, str_tmp);
	new_str_tmp(str_tmp);
	return (0);
}
