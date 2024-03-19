/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsandrin <nsandrin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:58:49 by nsandrin          #+#    #+#             */
/*   Updated: 2024/03/11 12:58:51 by nsandrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isoverlap(const void *dst, const void *src, size_t len)
{
	const void	*dstend;
	const void	*srcend;

	dstend = (const void *)dst + len;
	srcend = (const void *)src + len;
	return (dstend > src && srcend > dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	*dest;
	unsigned char	*source;

	if (!dst && !src)
		return (0);
	if (!isoverlap(dst, src, len))
		return (ft_memcpy(dst, src, len));
	dest = (unsigned char *) dst;
	source = (unsigned char *) src;
	if (dst < src)
	{
		i = -1;
		while (++i < (int)len)
			*(dest + i) = *(source + i);
	}
	else
	{
		i = len;
		while (--i >= 0)
			*(dest + i) = *(source + i);
	}
	return (dst);
}
