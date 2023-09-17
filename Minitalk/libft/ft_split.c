/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:35:27 by wfaouzi           #+#    #+#             */
/*   Updated: 2022/11/03 19:35:03 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*str)
	{
		if (*str != c && count == 0)
		{
			count = 1;
			i++;
		}
		else if (*str == c)
			count = 0;
		str++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		start;
	int		end;
	int		i;
	int		j;

	split = (char **)malloc((count_words(s, c) + 1) * (sizeof(char *)));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && ((s[i - 1] == c || i == 0)))
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
		{
			end = i;
			split[j] = ft_substr(s, start, (end - start + 1));
			j++;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
