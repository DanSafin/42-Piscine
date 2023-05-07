/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzapata <lzapata@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 20:09:09 by lzapata           #+#    #+#             */
/*   Updated: 2023/02/21 20:43:03 by lzapata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (((str[x] >= 0) && (str[x] <= 31)))
			return (0);
			x++;
	}
	return (1);
}
/*
int main ()
{
    char str[] = "\n";
    printf("%d \n", ft_str_is_printable(str));
    return(0);
}
*/
