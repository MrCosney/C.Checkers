/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 11:31:30 by cosney            #+#    #+#             */
/*   Updated: 2020/04/10 13:02:47 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <unistd.h>

int		check(int argc, char **argv);
int		ft_strlen(char *str);
int		white_spot(char board[][10], int *pos);
int		queen_spot(char board[][10], int *pos);
int		mv(char bd[][10], int x, int y, char *str, char *str_tmp);
int		queen_mv(char bd[][10], int x, int y, char *str, char *str_tmp);
char	*ft_strcat(char *str1, char *str2);
char	*ft_strcpy(char *str1, char *str2);
void	board_array(char **argv, char sud[][10]);
void	longest_way(char *str);
void	display_way(char *string);
void	zeros(char *str, int var);
void	vl(char	bd[][10], int x, int y, char *st, char *str_tmp);
void	vr(char	bd[][10], int x, int y, char *st, char *str_tmp);
void	nl(char	bd[][10], int x, int y, char *st, char *str_tmp);
void	nr(char	bd[][10], int x, int y, char *st, char *str_tmp);
void	temp_string(char *str_tmp);

#endif
