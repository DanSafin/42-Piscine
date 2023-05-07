/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-kwa <cwei-kwa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:29:16 by cwei-kwa          #+#    #+#             */
/*   Updated: 2023/02/15 14:26:16 by cwei-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c,1);
}

void	ft_putstr(char *str)
{
	int t;

	t = 0;
	while (str[t] != 0)
	{
		ft_putchar(str[t]);
		t++;
	}
}
