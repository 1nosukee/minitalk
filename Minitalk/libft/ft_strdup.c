/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:18:26 by wfaouzi           #+#    #+#             */
/*   Updated: 2022/10/30 16:07:23 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*n;
	int		i;
	int		size;

	size = 0;
	while (src[size])
		size++;
	n = malloc(sizeof(char) * (size) + 1);
	if (!n)
		return (NULL);
	i = 0;
	while (src[i])
	{
		n[i] = src[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}
