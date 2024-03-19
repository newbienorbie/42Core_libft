/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsandrin <nsandrin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:00:31 by nsandrin          #+#    #+#             */
/*   Updated: 2024/03/11 13:00:33 by nsandrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	len;
	unsigned int	i;

	if (!s || f == NULL)
		return (0);
	len = ft_strlen(s);
	res = (char *) malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	i = -1;
	while (++i < len)
	{
		*(res + i) = (f)(i, *(s + i));
	}
	*(res + len) = '\0';
	return (res);
}
