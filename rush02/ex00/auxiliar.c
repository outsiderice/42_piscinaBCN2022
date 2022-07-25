/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auxiliar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrodrigu <xrodrigu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 22:17:56 by xrodrigu          #+#    #+#             */
/*   Updated: 2022/07/24 23:24:34 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	ft_len(char *arr)
{
	int	count;

	count = 0;
	while (arr[count] != '\0')
		count++;
	return (count);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char *str)
{
	while (*str)
		write(1, str++, 1);
}

char	*ft_find_in_str(char *str, char *find)
{
	int	i;
	int	j;
	int	count;

	i = -1;
	if (*find == '\0')
		return (str);
	while (str[++i] != '\0')
	{
		j = 0;
		if (str[i] == find[j])
		{
			count = 0;
			while (find[j] != '\0')
			{
				if (find[j] == str[i + j])
					count++;
				j++;
			}
			if (count == ft_len(find) && (str[i + j] < '0' || str[i + j] > '9'))
				return (&str[i]);
		}
	}
	return (0);
}

void	ft_number_in_text(char *dict, char *num)
{
	int		i;
	char	*number_text;

	i = 0;
	number_text = ft_find_in_str(dict, num);
	while (number_text[i] != '\0')
	{
		if (!(number_text[i] > 47 && number_text[i] < 59))
		{
			if (number_text[i] != 32)
			{
				while (number_text[i] != 10)
				{
					write(1, &number_text[i], 1);
					i++;
				}
				break ;
			}
		}
		i++;
	}
}
