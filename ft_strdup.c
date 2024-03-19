/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsandrin <nsandrin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:59:59 by nsandrin          #+#    #+#             */
/*   Updated: 2024/03/11 13:00:01 by nsandrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		length;
	int		i;
	char	*dup;

	length = ft_strlen(s1);
	dup = (char *)malloc(length + 1 * sizeof(char));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
