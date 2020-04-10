/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   white_spot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 17:24:59 by cosney            #+#    #+#             */
/*   Updated: 2020/04/09 17:09:48 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		white_spot(char board[][10], int *pos)
{
	int x;
	int y;

	y = 1;
	while (y < 9)
	{
		x = 1;
		while (x < 9)
		{
			if (board[x][y] == 'w')
			{
				board[x][y] = '#';
				pos[0] = x;
				pos[1] = y;
				return (1);
			}
			x++;
		}
		y++;
	}
	return (0);
}
