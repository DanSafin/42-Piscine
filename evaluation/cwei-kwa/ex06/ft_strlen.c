/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-kwa <cwei-kwa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:30:15 by cwei-kwa          #+#    #+#             */
/*   Updated: 2023/02/16 10:12:14 by cwei-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	ft_strlen(char *str)
{
	int l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

/*
int main()
{
    char test[5];

    test[0] = 'h';
    test[1] = 'e';
    test[2] = 'l';
    test[3] = 'l';
    test[4] = '0';

    printf("%d", ft_strlen(test));
}
*/
