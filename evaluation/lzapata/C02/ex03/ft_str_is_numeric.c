/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzapata <lzapata@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:43:14 by lzapata           #+#    #+#             */
/*   Updated: 2023/02/21 20:34:56 by lzapata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!((str[x] >= 48) && (str[x] <= 57)))
			return (0);
			x++;
	}
	return (1);
}
/*
int main ()
{
    char str[] = "12111995";
    printf("%d \n", ft_str_is_numeric(str));
    return(0);
}
*/
