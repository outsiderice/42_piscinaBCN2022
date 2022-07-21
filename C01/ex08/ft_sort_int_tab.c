/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:42:48 by amagnell          #+#    #+#             */
/*   Updated: 2022/07/20 17:53:25 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	c;
	int	swap;

	i = 0;
	c = 0;
	while (i < (size - 1))
	{
		c = 0;
		while (c < size)
		{
			if (tab[c] > tab[c + 1])
			{
				swap = tab[c];
				tab[c] = tab[c + 1];
				tab[c + 1] = swap;
			}
			c++;
		}
		i++;
	}
}

/*int	main(void)
{
	int	tab[5];
	int	i;

	tab[0] = 4;
	tab[1] = 3;
	tab[2] = 5;
	tab[3] = 1;
	tab[4] = 2;
	i = 0;
	while (i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
	ft_sort_int_tab(&tab[0], 4);
	printf("\n");
	i = 0;
	while (i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/
