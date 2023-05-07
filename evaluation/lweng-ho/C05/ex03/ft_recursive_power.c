/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweng-ho <lweng-ho@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:18:39 by lweng-ho          #+#    #+#             */
/*   Updated: 2023/02/21 15:59:07 by lweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	else
	{
		n = ft_recursive_power(nb, power - 1);
		n = n * nb;
	}
	return (n);
}

/*#include <stdio.h>

int main(void)
{
	int result = ft_recursive_power(9, 5);

	printf("%d", result);
}*/
