/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 11:52:42 by cosney            #+#    #+#             */
/*   Updated: 2020/04/05 18:41:34 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

int		solution(char board[][10])
{
	int w_pos[2];
	int b_pos[2];

	white_spot(board, w_pos);
	black_spot(board, w_pos, b_pos); //Esli net chernix to exit;
	if (b_pos[0] == -1)
	{
		printf("NOTHING TO EAT");
		return (0);
	}
	printf("Position of White checker: ");
	printf("%d", w_pos[0]);
	printf("%d", w_pos[1]);
	printf("\nPosition of Black checker: ");
	printf("%d", b_pos[0]);
	printf("%d", b_pos[1]);
	return (0);
}

int		main(int argc, char **argv)
{
	char board[10][10];

	board_array(argv, board);
	solution(board);
	display(board);
}
