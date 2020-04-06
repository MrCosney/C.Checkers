/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 11:31:30 by cosney            #+#    #+#             */
/*   Updated: 2020/04/05 17:24:22 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <unistd.h>

void	board_array(char **argv, char sud[][10]);
void	display(char sud[][10]);
int		*white_spot(char board[][10], int *pos);
int		*black_spot(char board[][10],int *w_pos, int *b_pos);
//int		check(int argc, char **argv);

#endif
