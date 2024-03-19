/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsandrin <nsandrin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:57:04 by nsandrin          #+#    #+#             */
/*   Updated: 2024/03/11 12:57:06 by nsandrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*res;

	if (!lst)
		return (NULL);
	new = ft_lstnew((f)(lst->content));
	if (!new)
		return (NULL);
	res = new;
	lst = lst->next;
	while (lst)
	{
		new->next = ft_lstnew((f)(lst->content));
		if (!new->next)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		new = new ->next;
		lst = lst->next;
	}
	new->next = NULL;
	return (res);
}
