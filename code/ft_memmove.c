/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:01:03 by aartiges          #+#    #+#             */
/*   Updated: 2021/11/05 16:02:12 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*buf_dst;
	unsigned char	*buf_src;

	if (len > 0 && dst > src)
	{
		buf_dst = (unsigned char *)dst;
		buf_src = (unsigned char *)src;
		i = len - 1;
		while (i > 0)
		{
			buf_dst[i] = buf_src[i];
			i--;
		}
		buf_dst[0] = buf_src[0];
	}
	else if (dst < src)
		ft_memcpy(dst, src, len);
	return (dst);
}
