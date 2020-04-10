/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   black_spot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 17:53:04 by cosney            #+#    #+#             */
/*   Updated: 2020/04/09 18:24:08 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <string.h>
#define pos_size 2

int		mv(char bd[][10], int x, int y, char *st, char *str_tmp)
{
	char 	a[pos_size];
	char 	b[pos_size];
	int 	index;

	zeros(a, pos_size);
	zeros(b, pos_size);
	a[0] = x + '0';
	b[0] = y + '0';
	strcat(str_tmp, a);
	strcat(str_tmp, b);
	if ((bd[x + 1][y - 1] == 'b' || bd[x + 1][y - 1] == 'B') 
			&& (bd[x + 2][y - 2] == '.' || bd[x + 2][y - 2] == ' '))
		vl(bd, x, y, st, str_tmp);
	if ((bd[x + 1][y + 1] == 'b' || bd[x + 1][y + 1] == 'B')
			&& (bd[x + 2][y + 2] == '.' || bd[x + 2][y + 2] == ' '))
		vr(bd, x, y, st, str_tmp);
	strcat(st, str_tmp);
	temp_string(str_tmp);
	return (0);
}
