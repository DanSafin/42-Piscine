/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-kwa <cwei-kwa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:14:51 by cwei-kwa          #+#    #+#             */
/*   Updated: 2023/02/16 15:25:13 by cwei-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int c;
	int temp;

	c = 0;
	size--;
	while (c < size)
	{
		if (tab[c] > tab[c + 1])
		{
			temp = tab[c + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
			c = 0;
		}
		else
		{
			c++
		}
	}
}

int main(void)
{
    int test[10];

    test[0] = 57;
    test[1] = 56;
    test[2] = 50;
    test[3] = 48;
    test[4] = 51;
    test[5] = 55;
    test[6] = 49;
    test[7] = 52;
    test[8] = 54;
    test[9] = 53;

    ft_sort_int_tab(test, 10);
    int i;

    i=0;
    while (i < 10)
    {
        write(1, &test[i], sizeof(int));
        i++;
    }
