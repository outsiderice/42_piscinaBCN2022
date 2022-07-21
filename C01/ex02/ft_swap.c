/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:39:27 by amagnell          #+#    #+#             */
/*   Updated: 2022/07/17 09:57:58 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

//function to swap the value between two ints 
//whose addresses are entered as parameters.

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 0;
	b = 42;
	printf("a=%d b=%d\n", a, b);
	ft_swap(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return (0);
}*/
