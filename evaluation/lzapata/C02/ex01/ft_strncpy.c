/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzapata <lzapata@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:33:06 by lzapata           #+#    #+#             */
/*   Updated: 2023/02/22 11:46:39 by lzapata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
/*
int main ()
{
	char src[] = "Bonjour bonjour";
	char dest[100];

	unsigned int n = 25;
	ft_strncpy(dest, src, n);
	printf("Merci d'afficher le message suivant:\n%s\n", dest);
	return(0);
}
*/
