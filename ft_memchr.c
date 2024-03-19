/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsandrin <nsandrin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:58:29 by nsandrin          #+#    #+#             */
/*   Updated: 2024/03/11 12:58:32 by nsandrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*res;

	i = -1;
	res = (unsigned char *)s;
	while (++i < n)
		if (*(res + i) == (unsigned char)c)
			return (res + i);
	return (NULL);
}
