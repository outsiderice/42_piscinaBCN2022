/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborja-a <mborja-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:16:15 by mborja-a          #+#    #+#             */
/*   Updated: 2022/07/17 20:48:35 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_firstcheck(char **argv);
void	ft_square(void);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_firstcheck(argv) != 1)
		{
			ft_square();
			write(1, "??\nNO COMPUTA", 13);
		}
	}
	else
	{
		write(1, "Error", 5);
	}
	return (0);
}	
