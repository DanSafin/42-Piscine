/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shechong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:36:29 by shechong          #+#    #+#             */
/*   Updated: 2023/02/21 13:36:30 by shechong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	num;

	i = 1;
	num = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		num *= i;
		i++;
	}
	return (num);
}
/* 
#include <stdio.h>
int		main(void)
{
	int i;

	i = 0;
	printf("%d\n", ft_iterative_factorial(20));
} */
