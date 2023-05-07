/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsafin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:38:52 by dsafin            #+#    #+#             */
/*   Updated: 2023/02/12 18:57:10 by dsafin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_call(int nb)
{
	int	i;
	int	arr[10];

	i = 0;
	while (nb / 10 > 0 || nb % 10 > 0)
	{
		arr[i] = (nb % 10) + 48;
		nb /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(arr[i]);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
	{
		ft_putchar('0');
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_call(nb);
	}
	else
	{
		ft_call(nb);
	}
}
