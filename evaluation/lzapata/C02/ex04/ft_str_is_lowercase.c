/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzapata <lzapata@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:52:22 by lzapata           #+#    #+#             */
/*   Updated: 2023/02/21 20:38:01 by lzapata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!((str[x] >= 'a') && (str[x] <= 'z')))
			return (0);
			x++;
	}
	return (1);
}
/*
int main ()
{
    char str[] = "jaipastriche";
    printf("%d \n", ft_str_is_lowercase(str));
    return(0);
}
*/
