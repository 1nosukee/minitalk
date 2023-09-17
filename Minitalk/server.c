/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 00:40:55 by wfaouzi           #+#    #+#             */
/*   Updated: 2023/09/12 07:41:48 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	g_bits[8];

void	hanlde_sig(int sig, int *idx)
{
	if (sig == SIGUSR1)
	{
		g_bits[*idx] = '1';
		(*idx)--;
	}
	else if (sig == SIGUSR2)
	{
		g_bits[*idx] = '0';
		(*idx)--;
	}
}

void	sig_handler(int sig, siginfo_t *info, void *p)
{
	static int	idx = 7;
	static int	pid;

	(void)p;
	if (pid != info->si_pid)
	{
		idx = 7;
		pid = info->si_pid;
	}
	hanlde_sig(sig, &idx);
	if (idx == -1)
	{
		idx = 7;
		ft_putchar_fd(to_decimal(g_bits), 1);
		ft_bzero(g_bits, 8);
	}
}

int	main(void)
{
	pid_t				pid;
	char				*pid_str;
	struct sigaction	sig;

	pid = getpid();
	pid_str = ft_itoa(pid);
	ft_putstr_fd(pid_str, 1);
	ft_putchar_fd('\n', 1);
	free (pid_str);
	sig.sa_sigaction = sig_handler;
	sig.sa_flags = 0;
	sigaction(SIGUSR1, &sig, NULL);
	sigaction(SIGUSR2, &sig, NULL);
	while (1)
	{
		pause();
	}
	return (0);
}
