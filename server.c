/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrantne <pbrantne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:50:10 by pbrantne          #+#    #+#             */
/*   Updated: 2022/12/23 13:10:09 by pbrantne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_recive(int bit)
{
	static int	character;
	static int	i;

	if (bit == SIGUSR1)
		character += 1 << (7 - i);
	i++;
	if (i == 8)
	{
		ft_printf("%c", character);
		i = 0;
		character = 0;
	}
}

int	main(void)
{
	int	pid;

	pid = getpid();
	ft_printf("My PID is: %d\n", pid);
	signal(SIGUSR1, ft_recive);
	signal(SIGUSR2, ft_recive);
	while (1)
		pause();
}
