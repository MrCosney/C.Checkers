/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   black_spot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 17:53:04 by cosney            #+#    #+#             */
/*   Updated: 2020/04/07 19:37:04 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// v maine peredame pustuu str //peredash stroku
int		black_spot(char board[][10],int w_pos, int w_pos1, char *strr, char *str_tmp)
{
	char	str[1000] = "";
	char 	x[10];
	char 	y[10];
	char	str_tmp1[100];
	char	str_tmp2[100];

	x[0] = w_pos + '0';
	y[0] = w_pos1 + '0';
	strcat(str, x);
	strcat(str, y);
	strcat(str_tmp, str);
	if ((board[w_pos + 1][w_pos1 - 1] == 'b' 
		&& board[w_pos + 2][w_pos1 - 2] == '.')
		&& (board[w_pos + 1][w_pos1 + 1] == 'b' 
		&& board[w_pos + 2][w_pos1 + 2] == '.'))
	{
		strcpy(str_tmp1, str_tmp);
		strcpy(str_tmp2, str_tmp);
		if (black_spot(board, w_pos + 2, w_pos1 + 2, strr, str_tmp1) 
			&&	black_spot(board, w_pos + 2, w_pos1 - 2, strr, str_tmp2))
			return (0);
	}
	if (board[w_pos + 1][w_pos1 - 1] == 'b'	&& board[w_pos + 2][w_pos1 - 2] == '.')
		return(black_spot(board, w_pos + 2, w_pos1 - 2, strr, str_tmp));
	if (board[w_pos + 1][w_pos1 + 1] == 'b'	&& board[w_pos + 2][w_pos1 + 2] == '.')	
		return(black_spot(board, w_pos + 2, w_pos1 + 2, strr, str_tmp));
	strcat(strr, str_tmp);
	return (0);
}

