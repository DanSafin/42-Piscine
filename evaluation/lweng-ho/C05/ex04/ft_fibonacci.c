/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweng-ho <lweng-ho@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:35:50 by lweng-ho          #+#    #+#             */
/*   Updated: 2023/02/22 11:27:51 by lweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	n;

	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		n = ft_fibonacci(index - 1);
		n += ft_fibonacci(index - 2);
	}
	return (n);
}

/*#include <stdio.h>

int main(void)
{
	int result = ft_fibonacci(6);

	printf("%d", result);
}*/
