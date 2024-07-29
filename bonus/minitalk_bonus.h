/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:17:49 by malsheri          #+#    #+#             */
/*   Updated: 2024/07/09 13:07:56 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include <stdlib.h>
# include <signal.h>
# include <unistd.h>

void	ft_putchar(char c);
int		ft_atoi(const char *s);
//void	ft_putnbr(long n, char *base, int i, int *std_output);
void	ft_putnbr(int n);

typedef struct init
{
	int		i;
	char	c;
}			t_init;

#endif