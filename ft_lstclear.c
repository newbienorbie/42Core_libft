/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsandrin <nsandrin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:55:20 by nsandrin          #+#    #+#             */
/*   Updated: 2024/03/11 12:55:22 by nsandrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;

	if (!lst || del == NULL)
		return ;
	current = *lst;
	while (*lst != NULL)
	{
		current = *lst;
		*lst = current->next;
		ft_lstdelone(current, del);
	}
}
