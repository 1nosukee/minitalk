/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 22:09:14 by wfaouzi           #+#    #+#             */
/*   Updated: 2022/10/30 16:20:50 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *n, size_t l)
{
	size_t	i;
	size_t	x;
	size_t	a;

	i = 0;
	if (n[i] == 0)
		return ((char *)s);
	if (l == 0)
		return (NULL);
	while (s[i] && i < l)
	{
		x = 0;
		a = i;
		while (s[a] == n[x] && a < l)
		{
			if (n[x + 1] == '\0')
				return ((char *)s + i);
			x++;
			a++;
		}
		i++;
	}
	return (0);
}
