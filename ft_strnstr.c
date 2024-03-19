/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsandrin <nsandrin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:00:40 by nsandrin          #+#    #+#             */
/*   Updated: 2024/03/11 13:00:42 by nsandrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*s;
	char	*t;
	size_t	i;
	size_t	j;
	size_t	k;

	s = (char *) haystack;
	t = (char *) needle;
	if (*t == '\0')
		return (s);
	if (len == 0)
		return (NULL);
	k = 0;
	i = 0;
	while (*(s + i) != '\0' && k < len)
	{
		i = k;
		j = -1;
		while (*(s + i) == *(t + ++j) && *(t + j) != '\0' && i < len)
			i++;
		if (*(t + j) == '\0')
			return (s + k);
		k++;
	}
	return (0);
}
