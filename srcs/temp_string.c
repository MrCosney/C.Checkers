/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 18:12:11 by cosney            #+#    #+#             */
/*   Updated: 2020/04/09 18:12:15 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	temp_string(char *str_tmp)
{
	int		index;
	
	index = 0;
	while (str_tmp[index] != '\0')
	{
		index++;
	}
	str_tmp[index - 1] = '\0';
	str_tmp[index - 2] = '\0';
}