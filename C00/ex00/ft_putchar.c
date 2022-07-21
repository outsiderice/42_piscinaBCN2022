/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:48:00 by amagnell          #+#    #+#             */
/*   Updated: 2022/07/18 12:09:24 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//function which displays the character passed as a parameter.

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*int	main(void)
{
	ft_putchar('a');
	return (0);
}*/
