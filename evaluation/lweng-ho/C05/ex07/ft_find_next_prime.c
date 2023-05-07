/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweng-ho <lweng-ho@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:02:38 by lweng-ho          #+#    #+#             */
/*   Updated: 2023/02/25 12:04:08 by lweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 2)
	{
		return (2);
	}
	if (check_prime(nb) == 1)
	{
		return (nb);
	}
	else
	{
		return (ft_find_next_prime(nb + 1));
	}
}

/*#include <stdio.h>

int main(void)
{
	int result = ft_find_next_prime(246127941);

	printf("%d", result);
}*/
