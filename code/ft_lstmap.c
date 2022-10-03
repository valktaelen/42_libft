/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:55:17 by aartiges          #+#    #+#             */
/*   Updated: 2021/11/06 17:11:06 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*current;
	t_list	*tmp;

	if (ft_lstsize(lst) == 0)
		return (NULL);
	ret = ft_lstnew((*f)(lst->content));
	if (!ret)
		return (NULL);
	current = ret;
	lst = lst->next;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst->content));
		if (tmp)
			ft_lstadd_back(&current, tmp);
		else
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (ret);
}
