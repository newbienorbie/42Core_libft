/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsandrin <nsandrin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:59:54 by nsandrin          #+#    #+#             */
/*   Updated: 2024/03/11 12:59:56 by nsandrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;
	char	*res;

	len = ft_strlen(s);
	i = -1;
	res = (char *)s;
	while (++i <= len)
		if (*(res + i) == (char)c)
			return (res + i);
	return (NULL);
}
