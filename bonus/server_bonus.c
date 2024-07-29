/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:03:49 by malsheri          #+#    #+#             */
/*   Updated: 2024/07/09 13:28:52 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

t_init	g_t;

void	init_by_zero(void)
{
	g_t.c = (char)255;
	g_t.i = 0;
}

void	handler(int signum, siginfo_t *info, void *sheet)
{
	int static	pid;

	(void) sheet;
	if (pid != info->si_pid)
	{
		pid = info->si_pid;
		init_by_zero();
	}
	if (signum == SIGUSR1)
		g_t.c |= (0x80 >> g_t.i++);
	else if (signum == SIGUSR2)
		g_t.c ^= (0x80 >> g_t.i++);
	if (g_t.c == '\0')
		kill(info->si_pid, SIGUSR1);
	if (g_t.i == 8)
	{
		ft_putchar(g_t.c);
		init_by_zero();
	}
}

int	main(void)
{
	struct sigaction	new_act1;

	new_act1.sa_sigaction = &handler;
	new_act1.sa_flags = SA_SIGINFO;
	ft_putnbr(getpid());
	sigaction(SIGUSR1, &new_act1, NULL);
	sigaction(SIGUSR2, &new_act1, NULL);
	while (1)
		pause();
}
