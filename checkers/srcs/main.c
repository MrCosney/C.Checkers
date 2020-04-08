/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 11:52:42 by cosney            #+#    #+#             */
/*   Updated: 2020/04/07 19:53:32 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>
#include <string.h>

int		solution(char board[][10])
{
	int w_pos[2];
	char str[200];
	char *x;
	char str_tmp[200];
	char *t;

	x = str;
	t = str_tmp;
	//strcat(str_tmp, ".");
	//white_spot(board, w_pos);
	//black_spot(board, w_pos[0], w_pos[1], x, t); //Esli net chernix to exit;
	w_pos[0] = 0;
	while (1)
	{
		strcat(str_tmp, ".");
		white_spot(board, w_pos);
		if (w_pos[0] == -1)
				break;
		black_spot(board, w_pos[0], w_pos[1], x, t);
		printf("str = %s\n", str);
		longest_way(str);
		strcpy(str, "");
		strcpy(str_tmp, "");
	}
	//printf("%s", longest_way(str));
	//printf("%s\n",str);
	return (0);
}

int		main(int argc, char **argv)
{
	char board[10][10];

	board_array(argv, board);
	solution(board);
	display(board);
}
