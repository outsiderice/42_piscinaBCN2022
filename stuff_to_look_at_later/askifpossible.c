/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 04:37:03 by amagnell          #+#    #+#             */
/*   Updated: 2022/07/12 16:10:23 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//function that displays all unique different combinations of three different digits in ascending order, listed in ascending order.

void	ft_print_comb(void)
{
	int	cent;
	int	dec;
	int	uni;
	
	cent = 0;
	while (cent <= 7)
	{
		dec = 1;
		uni = 2;
		if (&cent != &dec && &dec != &uni)
		{
			write(1, &cent, 1);
			write(1, &dec, 1);
			write(1, &uni, 1);
			write(1, ", ", 2);
		}
		else if (uni < 9)
		{
			uni++;
		}
		else if (dec <= 8)
		{
			dec++;
			uni = uni + 1;
		}
	}
}
