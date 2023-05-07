/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsafin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:01:27 by dsafin            #+#    #+#             */
/*   Updated: 2023/03/02 11:41:12 by dsafin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	i = -1;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = malloc(sizeof(arr) * (max - min));
	if (arr == NULL)
		return (-1);
	else
		while (++i < (max - min))
			arr[i] = min + i;
	*range = arr;
	return (i);
}
