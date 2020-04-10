/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 11:52:42 by cosney            #+#    #+#             */
/*   Updated: 2020/04/09 17:23:27 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>
#include <string.h>

int		solution(char board[][10])
{
	int 	w_pos[2];
	int		q_pos[2];
	char 	str[a_size];
	char 	str_tmp[a_size];
	int		index;

	index = 0;
	zeros(str, a_size);
	zeros(str_tmp, a_size);
	while (white_spot(board, w_pos))
	{
		strcat(str_tmp, ".");
		mv(board, w_pos[0], w_pos[1], str, str_tmp);	
		index = 1;
	}
	while (queen_spot(board, q_pos))
	{
		if (index < 1)
			strcat(str_tmp, ".");
		queen_mv(board, q_pos[0], q_pos[1], str, str_tmp);
		index--;
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
