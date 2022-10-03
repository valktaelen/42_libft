/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:34:26 by aartiges          #+#    #+#             */
/*   Updated: 2021/11/07 20:02:19 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		++i;
	start = i;
	i = ft_strlen(s1);
	if (i)
		--i;
	while (i > 0 && ft_strchr(set, s1[i]) != NULL)
		--i;
	if (start <= i)
		return (ft_substr(s1, start, i - start + 1));
	return (ft_substr(s1, start, 1));
}
