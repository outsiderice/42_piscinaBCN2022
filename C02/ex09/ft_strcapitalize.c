/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:23:12 by amagnell          #+#    #+#             */
/*   Updated: 2022/07/27 12:27:13 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		while (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] >= '0' && str[i - 1] <= '9')
				i++;
			else if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				i++;
			else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				i++;
			else
				str[i] = str [i] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = " aa!as/ds3ds:gr@kw[sd'ass{}as~ae as";

	printf("%s", ft_strcapitalize(str));
}*/
