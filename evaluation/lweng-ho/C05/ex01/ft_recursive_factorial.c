/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweng-ho <lweng-ho@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:12:11 by lweng-ho          #+#    #+#             */
/*   Updated: 2023/02/22 11:25:47 by lweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (nb * (ft_recursive_factorial(nb - 1)));
	}
}

/*#include <stdio.h>

int main(void)
{
	int result = ft_recursive_factorial(-1);

	printf("%d", result);
}*/
