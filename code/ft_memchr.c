/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:04:03 by aartiges          #+#    #+#             */
/*   Updated: 2021/11/03 17:56:11 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buf;
	size_t			i;

	buf = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (buf[i] == (unsigned char)c)
			return (buf + i);
		i++;
	}
	return (NULL);
}
