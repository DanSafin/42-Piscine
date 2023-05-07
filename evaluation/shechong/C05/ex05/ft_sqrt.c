/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shechong <shechong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:42:53 by shechong          #+#    #+#             */
/*   Updated: 2023/02/21 13:43:38 by shechong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	check;
	int	i;

	check = 0;
	i = 0;
	if (nb <= 2147395600)
	{
		while (check == 0 && i <= nb && nb <= 2147483647)
		{
			if (i * i == nb)
				check = 1;
			else
				i++;
		}
	}
	if (check == 1)
		return (i);
	return (0);
}
/* 
#include <stdio.h>


int		main(void)
{
	int i;
	int Seg_Fault;

	Seg_Fault = 100000000;
	i = 0;
//	while (++i != Seg_Fault)
	printf("%d: %d\n", i, ft_sqrt(i));
}
 */
