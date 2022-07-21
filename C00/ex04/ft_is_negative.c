/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 20:19:09 by amagnell          #+#    #+#             */
/*   Updated: 2022/07/18 17:02:53 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

//function which displays an N if the integer entered as a parameter is negative
// and P if it's positive or null.

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else if (n >= 0)
	{
		write(1, "P", 1);
	}
}

/*int	main(void)
{
	ft_is_negative(0);
	return (0);
}*/
