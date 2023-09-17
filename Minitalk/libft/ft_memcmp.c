/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 22:09:14 by wfaouzi           #+#    #+#             */
/*   Updated: 2022/10/29 14:22:48 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	char	*c_s1;
	char	*c_s2;

	c_s1 = (char *)s1;
	c_s2 = (char *)s2;
	i = 0;
	while ((size_t)i < n)
	{
		if (c_s1[i] != c_s2[i])
			return ((unsigned char)c_s1[i] - (unsigned char)c_s2[i]);
		i++;
	}
	return (0);
}
