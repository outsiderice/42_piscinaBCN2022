/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:29:09 by amagnell          #+#    #+#             */
/*   Updated: 2022/07/19 17:56:53 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

//Function which reverses a given array of integer.

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size -1 / 2)
	{
		swap = tab[i];
		tab[i] = tab[size];
		tab[size] = swap;
		i++;
		size--;
	}
}

/*int	main(void)
{
	int	tab1[5];
	int	i;

	tab1[0] = 1;
	tab1[1] = 2;
	tab1[2] = 3;
	tab1[3] = 4;
	tab1[4] = 5;
	i = 0;
	while (i < 5)
	{
		printf("%d", tab1[i]);
		i++;
	}
	ft_rev_int_tab(&tab1[0], 4);
	printf("\n");
	i = 0;
	while (i < 5)
	{
		printf("%d", tab1[i]);
		i++;
	}
	return (0);
}*/
