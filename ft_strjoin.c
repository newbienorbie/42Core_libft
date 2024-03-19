/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsandrin <nsandrin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:00:10 by nsandrin          #+#    #+#             */
/*   Updated: 2024/03/11 13:00:12 by nsandrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	totallen;
	unsigned int	i;
	char			*res;

	if (!s1 || !s2)
		return (0);
	totallen = ft_strlen(s1) + ft_strlen(s2);
	res = (char *) malloc(sizeof(char) * (totallen + 1));
	if (res == NULL)
		return (NULL);
	i = -1;
	while (++i < ft_strlen(s1))
		*(res + i) = *(s1 + i);
	while (i < totallen)
	{
		*(res + i) = *s2;
		s2++;
		i++;
	}
	*(res + i) = '\0';
	return (res);
}
