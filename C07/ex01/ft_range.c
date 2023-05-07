/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsafin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:10:24 by dsafin            #+#    #+#             */
/*   Updated: 2023/02/27 13:59:53 by dsafin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*arr;

	i = max - min;
	if (min >= max)
		return (0);
	arr = malloc(sizeof(arr) * i);
	j = 0;
	while (j < i)
	{
		arr[j] = min + j;
		j++;
	}
	return (arr);
}
/*
#include <stdio.h>
int	main()
{
	int i = 7;
	int j = 24;

	printf("%i", *ft_range(i, j));
	return (0);
}*/
