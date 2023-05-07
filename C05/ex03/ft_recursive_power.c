/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsafin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:39:54 by dsafin            #+#    #+#             */
/*   Updated: 2023/02/24 11:17:08 by dsafin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power > 0)
	{
		i *= nb * ft_recursive_power(nb, power - 1);
		power -= 1;
	}
	return (i);
}
/*
int main()
{
	printf("%i", ft_recursive_power(7, 4));
	return (0);
}*/
