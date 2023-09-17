/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:30:24 by wfaouzi           #+#    #+#             */
/*   Updated: 2022/11/04 22:53:25 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*tm;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	j = ft_strlen(s);
	if (start > j)
	{
		start = j;
		len = 0;
	}
	else if (j < start + len)
		len = j - start;
	tm = ft_calloc(len + 1, sizeof(char));
	if (!tm)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		tm[i] = s[start + i];
		i++;
	}
	tm[i] = '\0';
	return (tm);
}
