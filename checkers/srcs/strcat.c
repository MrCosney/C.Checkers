/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 18:58:24 by cosney            #+#    #+#             */
/*   Updated: 2020/04/09 19:43:47 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *str1, char *str2)
{
	int		index0;
	int		index1;

	index0 = 0;
	index1 = 0;
	while (str1[index0])
		index0++;
	while (str2[index1] != '\0')
	{
		str1[index0 + index1] = str2[index1];
		index1++;
	}
	return(str1);
}
