/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 03:47:05 by aartiges          #+#    #+#             */
/*   Updated: 2021/11/06 22:56:32 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	tmp;

	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n > 9 || n < -9)
	{
		if (n >= 0)
			ft_putnbr_fd(n / 10, fd);
		else
			ft_putnbr_fd((n / 10) * -1, fd);
	}
	if (n < 0)
		tmp = (-(long)n) % 10 + '0';
	else
		tmp = n % 10 + '0';
	ft_putchar_fd(tmp, fd);
}
