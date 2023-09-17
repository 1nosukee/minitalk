/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:34:14 by wfaouzi           #+#    #+#             */
/*   Updated: 2022/11/02 15:40:37 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*k;
	int		i;

	i = 0;
	k = (char *)s;
	while (k[i] != '\0')
	{
		if (k[i] == (char)c)
			return (k + i);
		i++;
	}
	if (k[i] == (char)c)
		return (k + i);
	return (NULL);
}
