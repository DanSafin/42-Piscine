/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsafin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 10:28:12 by dsafin            #+#    #+#             */
/*   Updated: 2023/02/24 10:47:56 by dsafin           ###   ########.fr       */
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
/*
int	main()
{
	printf("%i", ft_is_prime(97));
	return (0);
}*/