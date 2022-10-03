/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:12:07 by aartiges          #+#    #+#             */
/*   Updated: 2021/11/06 18:39:08 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	e;

	i = ft_strlen(s);
	e = 1;
	while (e)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)s + i);
		if (i == 0)
			e = 0;
		--i;
	}
	return (NULL);
}
