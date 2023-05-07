/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweng-ho <lweng-ho@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:57:05 by lweng-ho          #+#    #+#             */
/*   Updated: 2023/02/22 11:26:48 by lweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;
	int	i;

	i = 0;
	n = 1;
	if (power < 0)
	{
		return (0);
	}
	else
	{
		while (i < power)
		{
			n *= nb;
			i++;
		}
		return (n);
	}
}

/*#include <stdio.h>

int main(void)
{
	int result = ft_iterative_power(8, 5);

	printf("%d", result);
}*/
