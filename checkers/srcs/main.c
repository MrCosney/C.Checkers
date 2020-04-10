/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 11:52:42 by cosney            #+#    #+#             */
/*   Updated: 2020/04/09 16:55:02 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>
#include <string.h>

int		solution(char board[][10])
{
	int w_pos[2];
	int	q_pos[2];
	char str[a_size];
	char str_tmp[a_size];
	int i;

	i = 0;
	zeros(str, a_size);
	zeros(str_tmp, a_size);
	while (1)
	{
		strcat(str_tmp, ".");
		white_spot(board, w_pos);
		//queen_spot(board, q_pos);
		if (w_pos[0] == -1)
				break;
		mv(board, w_pos[0], w_pos[1], str, str_tmp);
		//queen_mv(board, q_pos[0], q_pos[1], str, str_tmp);
	}
	while (1)
	{
		if (i > 0)
			strcat(str_tmp, ".");
		queen_spot(board, q_pos);
		if (q_pos[0] == -1)
			break;
		queen_mv(board, q_pos[0], q_pos[1], str, str_tmp);
		i++;
	}
	longest_way(str);
	return (0);
}

int		main(int argc, char **argv)
{
	char board[10][10];

	board_array(argv, board);
	solution(board);
	display(board);
}
