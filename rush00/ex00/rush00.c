/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsebasti <jsebasti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:53:04 by jsebasti          #+#    #+#             */
/*   Updated: 2022/07/09 20:38:27 by jsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(int x, char inil, char cont, char endl);

void	entra(int x, int y);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Error, no pots posar un valor <= 0\n", 36);
	}
	else
	{
		entra(x, y);
	}
}

void	entra(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
		{
			ft_putchar(x, 'o', '-', 'o');
		}
		else if (i == y)
		{
			ft_putchar(x, 'o', '-', 'o');
		}
		else
		{
			ft_putchar(x, '|', ' ', '|');
		}
		i++;
	}
}
