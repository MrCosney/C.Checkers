/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_way.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 11:43:20 by cosney            #+#    #+#             */
/*   Updated: 2020/04/09 12:14:55 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void    display_way(char *string)
{
    int		i;
    
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
