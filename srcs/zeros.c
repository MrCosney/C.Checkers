/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zeros.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 12:40:16 by cosney            #+#    #+#             */
/*   Updated: 2020/04/09 12:40:19 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	zeros(char *str, int var)
{
	int index;

	index = 0;
	while (index < var)
	{
		str[index] = '\0';
		index++;
	}
}
