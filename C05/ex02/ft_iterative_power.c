/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsafin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:24:32 by dsafin            #+#    #+#             */
/*   Updated: 2023/02/24 11:08:23 by dsafin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = 0;
	j = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0 && power == 0)
		return (1);
	else if (power > 0)
	{
		while (i < power - 1)
		{
			nb *= j;
			i++;
		}
	}
	return (nb);
}
/*
int main()
{
	printf("%i", ft_iterative_power(7, 4));
	return (0);
}*/
