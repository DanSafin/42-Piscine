/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsafin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:31:15 by dsafin            #+#    #+#             */
/*   Updated: 2023/02/12 16:19:07 by dsafin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printchar(int i, int j)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = i / 10;
	b = i % 10;
	c = j / 10;
	d = j % 10;
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(' ');
	ft_putchar(c + 48);
	ft_putchar(d + 48);
	if (i != 98 || j != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_printchar(i, j);
			j++;
		}			
		i++;
	}
}
