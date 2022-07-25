/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_d_c.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrodrigu <xrodrigu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 22:21:26 by xrodrigu          #+#    #+#             */
/*   Updated: 2022/07/24 23:36:23 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int		ft_len(char *arr);
void	ft_number_in_text(char *dict, char *num);
void	ft_putchar(char c);

void	unidades(int i, char *number, char *dict, char *digit)
{
	int	num_len;

	num_len = ft_len(number);
	if ((number[num_len - 1] != '0' || ft_len(number) == 1) \
			&& number[i - 1] != '1')
		ft_number_in_text(dict, digit);
}

void	decenas(int i, char *number, char *dict, char *digits)
{
	int	num_len;

	num_len = ft_len(number);
	if (number[i] == '1')
		digits[1] = number[i + 1];
	if (ft_len(number) > 2)
		ft_putchar(' ');
	ft_number_in_text(dict, digits);
	if (number[num_len - 1] != '0' && number[i] != '0')
		ft_putchar(' ');
}

void	centenas(char *number, char *dict, char *digit)
{
	int	num_len;

	num_len = ft_len(number);
	ft_putchar(' ');
	ft_number_in_text(dict, digit);
	ft_putchar(' ');
	ft_number_in_text(dict, "100");
}
