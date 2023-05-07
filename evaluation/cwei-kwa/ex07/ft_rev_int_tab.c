/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-kwa <cwei-kwa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:47:09 by cwei-kwa          #+#    #+#             */
/*   Updated: 2023/02/16 14:43:49 by cwei-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	hold;

	c = 0;
	size--;
	while (c < size)
	{
		hold = tab[c];
		tab[c] - tab[size];
		tab[size] = hold;
		c++;
		size--;
	}
}

/*
int	main(void)
{
	int test[5];

	test[0] = 'a';
	test[1] = 'b';
	test[2] = 'c';
	test[3] = 'd';
	test[4] = 'e';

	ft_rev_int_tab(test, 5);
	int	c;

	c = 0;
	while (i < 5)
	{
		write(1, &test[c], sizeof(int);
		c++;
	}
}
*/
