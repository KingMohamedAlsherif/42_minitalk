/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:23:57 by malsheri          #+#    #+#             */
/*   Updated: 2024/07/29 08:17:04 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	sig_handle(int signum)
{
	if (signum == 30)
		write(1, "Alhamdullah got the message\n", 27);
}

void	chars_sender(char c, int pid)
{
	int	shift;

	shift = 8;
	while (shift-- > 0)
	{
		if ((c >> shift) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	pid;

	i = -1;
	signal(SIGUSR1, &sig_handle);
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		if (pid < -1)
			return (0);
		if (SIGUSR1 )
		while (argv[2][++i])
			chars_sender(argv[2][i], pid);
		chars_sender('\0', pid);
	}
	else
		write(1, "invalide argument!!\n", 20);
}
