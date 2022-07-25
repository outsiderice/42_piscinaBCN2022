/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_separate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:48:30 by amagnell          #+#    #+#             */
/*   Updated: 2022/07/23 19:35:36 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//function which separates a given number decimally

void	ft_separate(char *num)
{
	num = argv[1][0];

	write (1, argv[1][1], 1);
}

int	main(int argc, char *argv[])
{
	ft_separate(argv[1]);
	return (0);
}
