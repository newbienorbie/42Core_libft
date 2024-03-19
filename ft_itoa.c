/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsandrin <nsandrin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:54:55 by nsandrin          #+#    #+#             */
/*   Updated: 2024/03/11 12:54:58 by nsandrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int	length;

	length = 1;
	if (n < 0)
	{
		n /= 10;
		length++;
		n *= -1;
		if (n > 0)
			length++;
	}
	while (n >= 10)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		length;

	length = num_len(n);
	str = (char *) malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	str[length] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		str[--length] = (char) -(n % 10) + '0';
		n /= 10;
		n *= -1;
	}
	while (n > 0)
	{
		str[--length] = (char)(n % 10 + '0');
		n /= 10;
	}
	return (str);
}
