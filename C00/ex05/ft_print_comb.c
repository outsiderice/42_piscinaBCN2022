/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:12:50 by amagnell          #+#    #+#             */
/*   Updated: 2022/07/18 12:25:20 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//function which displays all unique different combos of three different digits 
//in ascending order.

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				write(1, &x, 1);
				write(1, &y, 1);
				write(1, &z, 1);
				if (x <= '6' && y <= '8' && z <= '9')
					write(1, ", ", 2);
				z++;
			}
			y++;
		}
		x++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
