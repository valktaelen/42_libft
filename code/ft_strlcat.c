/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:21:43 by aartiges          #+#    #+#             */
/*   Updated: 2021/11/06 23:25:17 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	i;
	size_t	j;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	j = 0;
	len_dst = ft_strlen(dst);
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && i < dstsize - 1)
		dst[i++] = src[j++];
	if (dstsize != 0 && dstsize >= len_dst)
		dst[i] = '\0';
	if (dstsize < ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	else
		return (ft_strlen(src) + len_dst);
}
