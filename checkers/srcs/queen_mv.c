/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queen_mv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 16:17:31 by cosney            #+#    #+#             */
/*   Updated: 2020/04/09 20:14:45 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		queen_mv(char bd[][10], int x, int y, char *st, char *str_tmp)
{
	char 	a[2];
	char 	b[2];

	zeros(a, 2);
	zeros(b, 2);
	a[0] = x + '0';
	b[0] = y + '0';
	ft_strcat(str_tmp, a);
	ft_strcat(str_tmp, b);
	if ((bd[x + 1][y - 1] == 'b' || bd[x + 1][y - 1] == 'B') 
			&& (bd[x + 2][y - 2] == '.' || bd[x + 2][y - 2] == ' '))
		vl(bd, x, y, st, str_tmp);
	if ((bd[x + 1][y + 1] == 'b' || bd[x + 1][y + 1] == 'B')
			&& (bd[x + 2][y + 2] == '.' || bd[x + 2][y + 2] == ' '))
		vr(bd, x, y, st, str_tmp);	
	if ((bd[x - 1][y - 1] == 'b' || bd[x - 1][y - 1] == 'B') 
			&& (bd[x - 2][y - 2] == '.' || bd[x - 2][y - 2] == ' '))
		nl(bd, x, y, st, str_tmp);
	if ((bd[x - 1][y + 1] == 'b' || bd[x + 1][y - 1] == 'B') 
			&& (bd[x - 2][y + 2] == '.' || bd[x - 2][y + 2] == ' '))	
		nr(bd, x, y, st, str_tmp);
	ft_strcat(st, str_tmp);
	temp_string(str_tmp);
	return (0);
}
