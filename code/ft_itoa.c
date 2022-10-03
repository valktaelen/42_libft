/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 02:40:40 by aartiges          #+#    #+#             */
/*   Updated: 2021/11/06 03:12:56 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_rec(long n, int index, int *len, int negative)
{
	char	*ret;

	if (n == 0 && index)
	{
		ret = malloc((*len + 1) * sizeof(char));
		if (!ret)
			return (NULL);
		ret[*len] = '\0';
		if (negative)
			ret[0] = '-';
		return (ret);
	}
	++*len;
	ret = ft_itoa_rec(n / 10, index + 1, len, negative);
	if (!ret)
		return (NULL);
	ret[*len - index - 1] = n % 10 + '0';
	return (ret);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nb;

	len = 0;
	nb = n;
	if (n < 0)
	{
		nb = -((long)n);
		len = 1;
	}
	return (ft_itoa_rec(nb, 0, &len, n < 0));
}
