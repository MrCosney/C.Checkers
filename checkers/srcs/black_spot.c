/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   black_spot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 17:53:04 by cosney            #+#    #+#             */
/*   Updated: 2020/04/09 14:17:33 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>
#include <string.h>
#define pos_size 2

struct array
{
	char v[100];
	char w[100];
} ar;

int 	two_choses(char bd[][10], int x, int y)
{
	if ((bd[x + 1][y - 1] == 'b' && bd[x + 2][y - 2] == '.') 
		&& (bd[x + 1][y + 1] == 'b'	&& bd[x + 2][y + 2] == '.'))
		return (1);
	return (0);
}

int		mv(char bd[][10], int x, int y, char *st, char *str_tmp)
{
	char 	a[pos_size];
	char 	b[pos_size];

	zeros(a, pos_size);
	zeros(b, pos_size);
	a[0] = x + '0';
	b[0] = y + '0';
	strcat(str_tmp, a);
	strcat(str_tmp, b);
	if (two_choses(bd, x, y))
	{
		strcpy(ar.v, str_tmp);
		strcpy(ar.w, str_tmp);
		if (mv(bd, x + 2, y + 2, st, ar.v) && mv(bd, x + 2, y - 2, st, ar.w))
			return (0);
	}
	if (bd[x + 1][y - 1] == 'b'	&& bd[x + 2][y - 2] == '.')
		return(mv(bd, x + 2, y - 2, st, str_tmp));
	if (bd[x + 1][y + 1] == 'b'	&& bd[x + 2][y + 2] == '.')	
		return(mv(bd, x + 2, y + 2, st,  str_tmp));
	strcat(st, str_tmp);
	return (0);
}
