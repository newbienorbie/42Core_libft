/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsandrin <nsandrin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:00:15 by nsandrin          #+#    #+#             */
/*   Updated: 2024/03/11 13:00:17 by nsandrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_length;
	size_t	dest_length;
	size_t	i;

	if (dstsize == 0 && !dst)
		return (0);
	dest_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (dstsize <= dest_length)
		return (src_length + dstsize);
	i = 0;
	while (src[i] != '\0' && i < dstsize - dest_length - 1)
	{
		dst[dest_length + i] = src[i];
		i++;
	}
	dst[dest_length + i] = '\0';
	return (dest_length + src_length);
}
