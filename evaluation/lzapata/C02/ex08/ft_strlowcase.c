/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzapata <lzapata@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 20:26:38 by lzapata           #+#    #+#             */
/*   Updated: 2023/02/21 20:46:48 by lzapata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (((str[x] >= 'A') && (str[x] <= 'Z')))
			str[x] = (str[x] + 32);
		x++;
	}
	return (str);
}
/*
int main ()
{
    char str[] = "stptransformemoi";
    printf("%s \n", ft_strlowcase(str));
    return(0);
}
*/
