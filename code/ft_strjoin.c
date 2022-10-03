/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:19:27 by aartiges          #+#    #+#             */
/*   Updated: 2022/10/04 00:34:49 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*ret;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ret = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	i = 0;
	while (i < len_s1)
	{
		ret[i++] = *s1;
		++s1;
	}
	while (i < len_s1 + len_s2)
	{
		ret[i++] = *s2;
		++s2;
	}
	ret[i] = *s2;
	return (ret);
}

char	*ft_strjoin_null(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*ret;
	size_t	i;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ret = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	i = 0;
	while (i < len_s1)
	{
		ret[i++] = *s1;
		++s1;
	}
	while (i < len_s1 + len_s2)
	{
		ret[i++] = *s2;
		++s2;
	}
	ret[i] = *s2;
	return (ret);
}
