/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:44:57 by aartiges          #+#    #+#             */
/*   Updated: 2021/11/06 17:37:42 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*bufsrc;
	unsigned char	*bufdst;

	if (!dst && !src)
		return (NULL);
	i = 0;
	bufsrc = (unsigned char *)src;
	bufdst = (unsigned char *)dst;
	while (i < n)
	{
		bufdst[i] = bufsrc[i];
		i++;
	}
	return (dst);
}
