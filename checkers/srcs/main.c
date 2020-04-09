/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 11:52:42 by cosney            #+#    #+#             */
/*   Updated: 2020/04/08 17:17:14 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>
#include <string.h>

int		solution(char board[][10])
{
	int w_pos[2];
	char str[100] = "";
	char str_tmp[100] = "";

	while (1)
	{
		strcat(str_tmp, ".");
		white_spot(board, w_pos);
		if (w_pos[0] == -1)
				break;
		black_spot(board, w_pos[0], w_pos[1], str, str_tmp);
		//printf("str = %s\n", str);
		memset(str_tmp, '\0', 100);
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
