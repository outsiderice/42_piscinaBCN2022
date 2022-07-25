/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:41:09 by amagnell          #+#    #+#             */
/*   Updated: 2022/07/25 09:21:08 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 'u';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char			src1[3] = "abc";
	char			dest1[15] = "";

	printf(":%s:\n", dest1);
	ft_strncpy(dest1, src1, 14);
	printf(":%s:\n", dest1);
	return (0);
}*/
