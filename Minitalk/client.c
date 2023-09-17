/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 00:40:50 by wfaouzi           #+#    #+#             */
/*   Updated: 2023/09/12 07:45:37 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char *argv[])
{
	int	idx;

	if (argc < 3)
	{
		printf("No args\n");
		return (1);
	}
	idx = 0;
	while (argv[1][idx])
	{
		if (!ft_isdigit(argv[1][idx]))
		{
			printf("Pid not valid\n");
			return (1);
		}
		idx++;
	}
	stringtobinary(argv[2], argv[1]);
	return (0);
}
