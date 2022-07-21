/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkarguments.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborja-a <mborja-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:34:12 by mborja-a          #+#    #+#             */
/*   Updated: 2022/07/17 20:26:30 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

int	ft_firstcheck(char **argv)
{
	int	i;

	i = 0;
	while (i < 31)
	{
		if
			(argv[1][i] > '0' && argv[1][i] < '5');
		else if
			(argv[1][i] == ' ');
		else
		{
			write (1, "ERROR", 5);	
			return (1);
		}
	i++;
	}
	return(0);
}
