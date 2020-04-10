/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 09:33:34 by cosney            #+#    #+#             */
/*   Updated: 2020/04/10 12:50:29 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_checkchars(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] == 'B' || argv[i][j] == 'b' || argv[i][j] == ' ' 
					|| argv[i][j] == 'W' || argv[i][j] == 'w')
				j++;
		}
		if (j != 8)
			return (1);
		i++;
	}
	return (0);
}

int		ft_check(int argc, char **argv)
{
	int i;
	int j;
	int white;
	int black;

	white = 0;
	black = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] == 'w' || argv[i][j] == 'W')
				white++;
			if (argv[i][j] == 'b' || argv[i][j] == 'B')
				black++;
			j++;
		}
		i++;
	}
	if (white > 12 || black > 12)
		return (1);
	return (0);
}

int		ft_checkblack(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{ 
		if (i % 2 != 0)
			j = 1;
		else 
			j = 0;
		while (argv[i][j] != '\0' || j < 8)
		{
			if (argv[i][j] != ' ')
				return (1);
			j = j + 2;
		}
		i++;
	}
	return (0);
}

int		check(int	argc, char **argv)
{
	if (argc != 9)
		return (1);
	if (ft_checkchars(argc, argv))
		return (1);
	if (ft_check(argc, argv))
		return (1);
	if (ft_checkblack(argc, argv))
		return (1);
	return (0);
}
