/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 06:46:17 by wfaouzi           #+#    #+#             */
/*   Updated: 2023/09/14 05:07:52 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	sendsignal(int pid, int signal)
{
	if (kill(pid, signal) == -1)
	{
		perror("Error sending signal");
		exit(1);
	}
	usleep(500);
}

void	stringtobinary(const char *input, char *server_pid)
{
	int				pid;
	unsigned char	ch;
	int				i;

	pid = ft_atoi(server_pid);
	while (*input)
	{
		ch = *input++;
		i = 7;
		while (i >= 0)
		{
			if (ch & (1 << i))
			{
				sendsignal(pid, SIGUSR1);
			}
			else
			{
				sendsignal(pid, SIGUSR2);
			}
			i--;
		}
	}
	ft_putchar_fd('\n', 1);
}

int	power(int num, int pow)
{
	int	res;

	res = num;
	if (pow == 0)
		return (1);
	while (pow > 1)
	{
		res = res * num;
		pow--;
	}
	return (res);
}

char	to_decimal(char *bin)
{
	int		bin_idx;
	char	count;
	int		i;

	bin_idx = 0;
	count = 0;
	i = 0;
	while (i < 8)
	{
		count += (bin[i] - 48) * power(2, bin_idx);
		bin_idx++;
		i++;
	}
	return (count);
}
