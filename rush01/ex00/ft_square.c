/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:32:32 by amagnell          #+#    #+#             */
/*   Updated: 2022/07/17 19:43:38 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

//void	ft_putchar(char c);

void	ft_square(void)
{
	int	x;
	int	y;	
//como declarar e inicializar arrays para que pase la Normie?		
	char	square[4][4] = {{1, 2, 3, 4}, {2, 3, 4, 1}, {3, 4, 1, 2}, {4, 1, 2, 3}};	
	x = 0;
	while (x <= 3)
	{
		y = 0;
		while (y <= 3)
		{
//como hacerlo con ft_putchar
			printf("%d", square[x][y]);
			if (y < 3)
				printf(" ");
			y++;
		}
		x++;
		printf("\n");
	}
}
