/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   longest_way.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 18:24:04 by cosney            #+#    #+#             */
/*   Updated: 2020/04/07 19:43:07 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	longest_way(char *str)
{
	int i;
	int j;
	int k;
	char tr[100];
	char tmp[100];

	strcat(str, ".");
	i = 1;
	j = 0;
	while (str[i] != '\0')
	{	
		k = 0;
		while (str[i] != '.')
		{
			tr[k] = str[i];
			i++;
			k++;
		}
		if (strlen(tr) > j)
		{
			strcpy(tmp, tr);
			j = strlen(tr);
		}
		i++;
	}
	printf("longest way = %s\n", tmp);
	return (0);
}
