/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:27:21 by wfaouzi           #+#    #+#             */
/*   Updated: 2022/10/27 17:29:21 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	bidaya;
	size_t	nihaya;

	bidaya = 0;
	while (s1[bidaya] && ft_char_in_set(s1[bidaya], set))
		bidaya++;
	nihaya = ft_strlen(s1);
	while (nihaya > bidaya && ft_char_in_set(s1[nihaya - 1], set))
		nihaya--;
	str = (char *)malloc(sizeof(*s1) * (nihaya - bidaya + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (bidaya < nihaya)
		str[i++] = s1[bidaya++];
	str[i] = 0;
	return (str);
}
