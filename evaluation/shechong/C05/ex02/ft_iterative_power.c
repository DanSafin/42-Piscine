/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shechong <shechong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:39:34 by shechong          #+#    #+#             */
/*   Updated: 2023/02/21 13:39:53 by shechong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	num;

	i = 1;
	num = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		num *= nb;
		i++;
	}
	return (num);
}
/* 
#include <stdio.h>
int		main(void)
{
	printf("%d\n", ft_iterative_power(-10, 3));
}
 */
