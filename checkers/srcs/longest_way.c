/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   longest_way.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 18:24:04 by cosney            #+#    #+#             */
/*   Updated: 2020/04/08 17:32:15 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

void    correct_disp(char *string)
{
    int i;
    
    i = 1;
    while (string[i] != '\0')
    {
        if (i > 1)
            write(1, "-", 1);
        if (string[i] == '1')
            write(1, "A", 1);
        if (string[i] == '2')
            write(1, "B", 1);
        if (string[i] == '3')
            write(1, "C", 1);
        if (string[i] == '4')
            write(1, "D", 1);
        if (string[i] == '5')
            write(1, "E", 1);
        if (string[i] == '6')
            write(1, "F", 1);
        if (string[i] == '7')
            write(1, "G", 1);
        if (string[i] == '8')
            write(1, "H", 1);
        write(1, &string[i-1], 1);
        i = i + 2;
    }
}

int	longest_way(char *str)
{
	int i;
	int j;
	int k;
	char tr[50] = "";
	char tmp[50] = "";

	i = 1;
	j = 0;
	while (str[i] != '\0')
	{	
		k = 0;
		while (str[i] >= '0' && str[i] <= '9')
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
	correct_disp(tmp);
	write(1, "\n", 1);
	return (0);
}
