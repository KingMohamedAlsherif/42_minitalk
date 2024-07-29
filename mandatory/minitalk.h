/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:01:55 by malsheri          #+#    #+#             */
/*   Updated: 2024/07/09 13:31:14 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdlib.h>
# include <signal.h>
# include <unistd.h>

void	ft_putchar(char c);
int		ft_atoi(const char *s);
void	ft_putnbr(int i);

typedef struct init
{
	int		i;
	char	c;
}			t_init;

#endif