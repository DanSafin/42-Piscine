/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsafin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:44:53 by dsafin            #+#    #+#             */
/*   Updated: 2023/02/23 13:20:57 by dsafin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_call(int nb)
{
	int	arr[1000];
	int	i;

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
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
		ft_call(nb);
	}
	else if (nb == 0)
		ft_putchar('0');
	else if (nb > 0)
		ft_call(nb);
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_call(nb);
	}
}
