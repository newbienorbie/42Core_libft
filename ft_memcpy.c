/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsandrin <nsandrin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:58:42 by nsandrin          #+#    #+#             */
/*   Updated: 2024/03/11 12:58:45 by nsandrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*source;

	i = -1;
	if (n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	dest = (char *)dst;
	source = (char *)src;
	while (++i < n)
		*(dest + i) = *(source + i);
	return (dst);
}
