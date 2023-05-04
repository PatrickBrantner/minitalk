/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrantne <pbrantne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:49:51 by pbrantne          #+#    #+#             */
/*   Updated: 2022/12/23 13:21:15 by pbrantne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_putbit(unsigned char a, int pid)
{
	if (a > 1)
	{
		ft_putbit (a / 2, pid);
		ft_putbit (a % 2, pid);
	}
	else
	{
		if (a == 1)
			kill(pid, SIGUSR1);
		if (a == 0)
			kill(pid, SIGUSR2);
		usleep(100);
	}
}

void	fill_zero(unsigned char a, int pid)
{
	int		j;
	char	char_temp;

	char_temp = a;
	j = 8;
	while (char_temp != 0)
	{
		char_temp = char_temp / 2;
		j--;
	}
	if (a == 0)
		j--;
	while (j > 0)
	{
		kill(pid, SIGUSR2);
		j--;
		usleep(100);
	}
	ft_putbit(a, pid);
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][i] != '\0')
		{
			fill_zero(argv[2][i], pid);
			i++;
		}
	}
	else
	{
		ft_printf("Error");
		exit(1);
	}
}
