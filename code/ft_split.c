/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:58:58 by aartiges          #+#    #+#             */
/*   Updated: 2021/11/07 20:03:10 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbsplit(const char *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	start;

	i = 0;
	start = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && i > start && s[i])
			count++;
		if (s[i] && s[i] == c)
			start = i + 1;
		i++;
	}
	if (s[start] != 0)
		count++;
	return (count);
}

static char	*create_string(const char *str, size_t start, size_t end)
{
	size_t	i;
	char	*ret;

	ret = malloc(sizeof(char) * (end - start + 1));
	if (!ret)
		return (NULL);
	i = start;
	while (i < end)
	{
		ret[i - start] = str[i];
		i++;
	}
	ret[end - start] = '\0';
	return (ret);
}

static int	ft_free2d(char **split, size_t index)
{
	size_t	i;

	i = 0;
	while (i <= index)
		free(split[i]);
	free(split);
	return (1);
}

static int	write_split(char **split, const char *str, char c)
{
	size_t	i;
	size_t	start;
	size_t	index;

	i = 0;
	start = 0;
	index = 0;
	while (str[i])
	{
		if (str[i] == c && i > start && str[i])
		{
			split[index++] = create_string(str, start, i);
			if (!split[index - 1])
				return (!ft_free2d(split, index - 2));
		}
		if (str[i] && str[i] == c)
			start = i + 1;
		i++;
	}
	if (i == 0)
		split[index] = NULL;
	if (str[start] != 0)
		split[index++] = create_string(str, start, i);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_nbsplit(s, c);
	split = malloc((size + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split[size] = NULL;
	if (write_split(split, s, c))
		return (split);
	return (NULL);
}
