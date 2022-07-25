/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:25:32 by amagnell          #+#    #+#             */
/*   Updated: 2022/07/24 15:53:45 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

void	*malloc(size_t size)
{
	char	*c;
	c = malloc (sizeof *c * (ft_strlen(argv[]) + 1));
}
