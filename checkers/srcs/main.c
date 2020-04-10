/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 11:52:42 by cosney            #+#    #+#             */
/*   Updated: 2020/04/09 20:06:37 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	solution(char board[][10])
{
	int		index;
	int 	w_pos[2];
	int		q_pos[2];
	char 	str[500];
	char 	str_tmp[500];

	index = 0;
	zeros(str, 500);
	zeros(str_tmp, 500);
	while (white_spot(board, w_pos))
	{
		ft_strcat(str_tmp, ".");
		mv(board, w_pos[0], w_pos[1], str, str_tmp);
		index = 1;
	}
	while (queen_spot(board, q_pos))
	{
		if (index < 1)
			ft_strcat(str_tmp, ".");
		queen_mv(board, q_pos[0], q_pos[1], str, str_tmp);
		index--;
	}
	longest_way(str);
}

int		main(int argc, char **argv)
{
	char board[10][10];

	board_array(argv, board);
	solution(board);
	display(board);
	return (0);
}
