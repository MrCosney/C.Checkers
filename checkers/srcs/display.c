/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 14:24:41 by cosney            #+#    #+#             */
/*   Updated: 2020/04/05 17:26:44 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display(char board[][10])
{
	int	x;
	int	y;

	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			write(1, &board[x][y], 1);
			if (y != 9)
				write(1, " ", 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
}