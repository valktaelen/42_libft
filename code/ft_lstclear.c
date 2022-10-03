/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:32:50 by aartiges          #+#    #+#             */
/*   Updated: 2021/11/06 16:42:29 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*current;

	if (lst)
	{
		current = (*lst);
		while (current)
		{
			tmp = current;
			current = current->next;
			ft_lstdelone(tmp, del);
		}
	}
	*lst = NULL;
}
