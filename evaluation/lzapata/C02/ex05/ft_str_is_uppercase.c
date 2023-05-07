/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzapata <lzapata@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 20:07:03 by lzapata           #+#    #+#             */
/*   Updated: 2023/02/21 20:40:34 by lzapata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!((str[x] >= 'A') && (str[x] <= 'Z')))
			return (0);
			x++;
	}
	return (1);
}
/*
int main ()
{
    char str[] = "JAIPASTRICHE";
    printf("%d \n", ft_str_is_uppercase(str));
    return(0);
}
*/
