/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzapata <lzapata@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:08:15 by lzapata           #+#    #+#             */
/*   Updated: 2023/02/22 13:14:04 by lzapata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!((str[x] >= 'a') && (str[x] <= 'z'))
			&& !((str[x] >= 'A') && (str[x] <= 'Z')))
			return (0);
		x++;
	}
	return (1);
}
/*
int main ()
{
	char str[] = "caracteresoupas";
	char *str2 = "Az1"; 
	char *str3 = "ABCabc";
	printf("%d \n", ft_str_is_alpha(str));
	printf("%d \n", ft_str_is_alpha(str2));
	printf("%d \n", ft_str_is_alpha(str3));
	return(0);
}
*/
