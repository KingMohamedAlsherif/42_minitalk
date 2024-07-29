/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:02:29 by malsheri          #+#    #+#             */
/*   Updated: 2024/07/29 08:27:00 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char **argv)
{
	pid_t	pid;
	int		i;
	int		shift;

	i = -1;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][++i])
		{
			shift = 8;
			while (shift-- > 0)
			{
				if ((argv[2][i] >> shift) & 1)
					kill(pid, SIGUSR1);
				else
					kill(pid, SIGUSR2);
				usleep(100);
			}
		}
		if (pid < 0)
			return (0);
	}
	else
		write(1, "~~Usage pid and message~~\n", 20);
}
