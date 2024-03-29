/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaki <aennaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:24:02 by aennaki           #+#    #+#             */
/*   Updated: 2022/10/09 13:12:03 by aennaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	signe;

	i = 0;
	while (str && str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	signe = 1;
	if (str && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	res = 0;
	while (str && str[i] >= 48 && str[i] <= 57)
	{
		res *= 10;
		res += (str[i] - 48);
		i++;
	}
	return (res * signe);
}
