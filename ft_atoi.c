/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsandrin <nsandrin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:53:11 by nsandrin          #+#    #+#             */
/*   Updated: 2024/03/11 12:53:13 by nsandrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char str)
{
	if (str == ' ' || (str >= '\t' && str <= '\r'))
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	i;

	sign = 1;
	res = 0;
	i = 0;
	while (ft_isspace(str[i]) == 0)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
