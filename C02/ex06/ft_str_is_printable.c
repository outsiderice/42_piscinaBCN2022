/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 09:10:30 by amagnell          #+#    #+#             */
/*   Updated: 2022/07/25 09:29:10 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] < 32) || (str[i] == 127))
            return (0);
        i++;
    }
    return (1);
}

/*int   main(void)
{
    printf("%d", ft_str_is_printable("hola"));
    return (0);
}*/
