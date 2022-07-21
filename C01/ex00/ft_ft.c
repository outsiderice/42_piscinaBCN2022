/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:25:35 by amagnell          #+#    #+#             */
/*   Updated: 2022/07/15 15:22:57 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*int	main(void)
{
	int	*nbr;
	int	a;

	a = 0;
	nbr = &a;
	ft_ft(nbr);
	printf("%d", *nbr);
	return (0);
}*/
