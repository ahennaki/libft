/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaki <aennaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:21:18 by aennaki           #+#    #+#             */
/*   Updated: 2022/10/12 22:46:21 by aennaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	if (!dest && size == 0)
		return (ft_strlen(src));
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size == 0 || dlen > size)
		return (slen + size);
	i = 0;
	while (src && src[i] && (i + dlen) < (size - 1))
	{
		dest[i + dlen] = src[i];
		i++;
	}
	dest[i + dlen] = '\0';
	return (dlen + slen);
}
