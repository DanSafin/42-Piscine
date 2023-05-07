/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shechong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:41:48 by shechong          #+#    #+#             */
/*   Updated: 2023/02/21 13:41:49 by shechong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci_rec(int index, int val1, int val2)
{
	int	num;

	num = 0;
	if (index == 0)
		return (0);
	if (index == 1)
		return (val2);
	if (index > 1)
	{
		num = ft_fibonacci_rec(index -1, val2, val1 + val2);
		return (num);
	}	
	return (-1);
}

int	ft_fibonacci(int index)
{
	return (ft_fibonacci_rec(index, 0, 1));
}
/* 
#include <stdio.h>

int		main(void)
{
	printf("%d\n", ft_fibonacci(100));
} */
