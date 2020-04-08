/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   q_black_spot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 17:53:04 by cosney            #+#    #+#             */
/*   Updated: 2020/04/06 12:06:57 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*q_black_spot(char board[][10],int *w_pos, int *b_pos)
{
	if (board[w_pos[0] + 1][w_pos[1] + 1] == 'b')
	{
		b_pos[0] = w_pos[0] + 1;
		b_pos[1] = w_pos[1] + 1;
		return (b_pos);
	}
	if (board[w_pos[0] + 1][w_pos[1] - 1] == 'b')
	{
		b_pos[0] = w_pos[0] + 1;
		b_pos[1] = w_pos[1] - 1;
		return (b_pos);
	}
	if (board[w_pos[0] - 1][w_pos[1] - 1] == 'b')
	{
		b_pos[0] = w_pos[0] - 1;
		b_pos[1] = w_pos[1] - 1;
		return (b_pos);
	}
	if (board[w_pos[0] - 1][w_pos[1] + 1] == 'b')
	{
		b_pos[0] = w_pos[0] - 1;
		b_pos[1] = w_pos[1] + 1;
		return (b_pos);
	}
	b_pos[0] = -1;
	return (0);
}
