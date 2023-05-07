/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweng-ho <lweng-ho@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:51:11 by lweng-ho          #+#    #+#             */
/*   Updated: 2023/02/22 11:25:05 by lweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	n = nb;
	while (nb > 1)
	{
		n *= (nb - 1);
		nb--;
	}
	return (n);
}

/*#include <stdio.h>

int main(void)
{
	int result = ft_iterative_factorial(10);
	printf("%d", result);
}*/
