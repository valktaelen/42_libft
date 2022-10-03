/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:44:29 by aartiges          #+#    #+#             */
/*   Updated: 2021/11/02 16:55:40 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			cursor;
	unsigned char	*p;

	cursor = 0;
	p = b;
	while (cursor < len)
	{
		p[cursor] = (unsigned char)c;
		cursor++;
	}
	return (b);
}
