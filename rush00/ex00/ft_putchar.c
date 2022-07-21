/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsebasti <jsebasti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:51:30 by jsebasti          #+#    #+#             */
/*   Updated: 2022/07/10 14:51:35 by jsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(int x, char inil, char cont, char endl)
{
	int	i;

	i = 0;
	x = x - 2;
	write(1, &inil, 1);
	while (i < x)
	{
		write(1, &cont, 1);
		i ++;
	}
	if (i == x)
	{
		write(1, &endl, 1);
	}
	write(1, "\n", 1);
}
