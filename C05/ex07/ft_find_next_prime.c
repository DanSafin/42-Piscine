/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsafin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 10:50:04 by dsafin            #+#    #+#             */
/*   Updated: 2023/02/27 11:11:23 by dsafin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (x != nb && nb % x > 0)
	{
		x++;
		if (x == nb)
			return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (i < 2147483647 && !ft_is_prime(i))
		i++;
	return (i);
}
