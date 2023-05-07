/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsafin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:44:49 by dsafin            #+#    #+#             */
/*   Updated: 2023/02/12 17:51:11 by dsafin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_x(int x)
{
	int	b;

	b = 0;
	if (x == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
	if (x > 1)
	{
		ft_putchar('o');
		while (b < x - 2)
		{
			ft_putchar('-');
			b++;
		}
		ft_putchar('o');
		ft_putchar('\n');
	}
}

void	print_y(int x, int y)
{
	int	a;
	int	b;

	a = 0;
	if (y >= 1)
	{
		while (a < y)
		{
			ft_putchar('|');
			b = 0;
			while (b < x -2)
			{
				ft_putchar(' ');
				b++;
			}
			if (x > 1)
			{
				ft_putchar('|');
			}
			ft_putchar('\n');
			a++;
		}
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "$invalid$", 9);
	}
	y -= 2;
	print_x(x);
	print_y(x, y);
	if (y >= 0)
	{
		print_x(x);
	}
}
