/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzapata <lzapata@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 20:19:35 by lzapata           #+#    #+#             */
/*   Updated: 2023/02/21 20:44:44 by lzapata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (((str[x] >= 'a') && (str[x] <= 'z')))
			str[x] = (str[x] - 32);
		x++;
	}
	return (str);
}
/*
int main ()
{
    char str[] = "stptransformemoi";
    printf("%s \n", ft_strupcase(str));
    return(0);
}
*/
