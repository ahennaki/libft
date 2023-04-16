/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaki <aennaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:58:19 by aennaki           #+#    #+#             */
/*   Updated: 2022/10/12 23:01:12 by aennaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)big;
	if (!big && !len)
		return (0);
	if (little[0] == '\0')
		return (str);
	i = 0;
	while (big[i] && len)
	{
		j = 0;
		while (big[i + j] && little[j] && big[i + j] == little[j]
			&& (i + j) < len)
			j++;
		if (!little[j])
			return (str + i);
		i++;
	}
	return (0);
}
