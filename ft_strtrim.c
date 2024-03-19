/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsandrin <nsandrin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:00:50 by nsandrin          #+#    #+#             */
/*   Updated: 2024/03/11 13:00:51 by nsandrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(char const *set, char c)
{
	int	i;

	i = -1;
	while (*(set + ++i) != '\0')
		if (*(set + i) == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*res;
	size_t			i;
	size_t			end;

	if (!s1 || !set)
		return (0);
	i = 0;
	end = ft_strlen(s1);
	while (isset(set, *(s1 + i)) && *(s1 + i))
		i++;
	while (isset(set, s1[end - 1]) && s1[end - 1] && i < end)
		end--;
	res = (char *) malloc(sizeof(char) * (end - i + 1));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, (s1 + i), end - i + 1);
	return (res);
}
