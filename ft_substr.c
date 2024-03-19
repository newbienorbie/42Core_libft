/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsandrin <nsandrin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:00:55 by nsandrin          #+#    #+#             */
/*   Updated: 2024/03/11 13:00:56 by nsandrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	char			*str;
	size_t			i;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)s;
	if ((size_t) start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (i < len)
	{
		*(res + i) = *(str + start + i);
		i++;
	}
	*(res + i) = '\0';
	return (res);
}
