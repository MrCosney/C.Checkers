/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_way.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 18:09:47 by cosney            #+#    #+#             */
/*   Updated: 2020/04/09 18:10:48 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	vl(char	bd[][10], int x, int y, char *st, char *str_tmp)
{
	bd[x + 1][y - 1] = '#';
	queen_mv(bd, x + 2, y - 2, st, str_tmp);
	bd[x + 1][y - 1] = 'b';
}

void	vr(char	bd[][10], int x, int y, char *st, char *str_tmp)
{
	bd[x + 1][y + 1] = '#';
	queen_mv(bd, x + 2, y + 2, st,  str_tmp);
	bd[x + 1][y + 1] = 'b';
}

void	nl(char	bd[][10], int x, int y, char *st, char *str_tmp)
{
	bd[x - 1][y - 1] = '#';
	queen_mv(bd, x - 2, y - 2, st, str_tmp);	
	bd[x - 1][y - 1] = 'b';
}

void	nr(char	bd[][10], int x, int y, char *st, char *str_tmp)
{
	bd[x - 1][y + 1] = '#';
	queen_mv(bd, x - 2, y + 2, st,  str_tmp);
	bd[x - 1][y + 1] = 'b';
}
