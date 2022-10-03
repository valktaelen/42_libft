/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:50:46 by aartiges          #+#    #+#             */
/*   Updated: 2021/11/07 19:53:50 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_ret;
	char	*ret;

	if (!s)
		return (NULL);
	len_ret = ft_strlen(s);
	if (len <= 0 || len_ret < start)
		len_ret = 1;
	else
	{
		len_ret -= start;
		if (len_ret > len)
			len_ret = len + 1;
		else
			++len_ret;
	}
	ret = malloc((len_ret) * sizeof(char));
	if (!ret)
		return (NULL);
	ft_memmove(ret, s + start, len_ret);
	ret[len_ret - 1] = '\0';
	return (ret);
}
