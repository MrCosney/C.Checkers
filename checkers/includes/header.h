/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 11:31:30 by cosney            #+#    #+#             */
/*   Updated: 2020/04/09 17:10:25 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <unistd.h>

#define a_size 500

void	board_array(char **argv, char sud[][10]);
void	display(char sud[][10]);
int		white_spot(char board[][10], int *pos);
int		queen_spot(char board[][10], int *pos);
int		*q_black_spot(char board[][10],int *w_pos, int *b_pos);
int		mv(char board[][10], int w_pos, int w_pos1, char *str, char *str_tmp);
int		queen_mv(char board[][10], int w_pos, int w_pos1, char *str, char *str_tmp);	
void	longest_way(char *str);
void	display_way(char *string);
void	zeros(char *str, int var);
#endif
