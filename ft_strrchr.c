/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsandrin <nsandrin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:00:45 by nsandrin          #+#    #+#             */
/*   Updated: 2024/03/11 13:00:47 by nsandrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*res;

	len = ft_strlen(s);
	res = (char *)s;
	while (len >= 0)
	{
		if (*(res + len) == (char)c)
			return (res + len);
		len--;
	}
	return (NULL);
}
