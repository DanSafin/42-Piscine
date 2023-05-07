/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsafin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:56:12 by dsafin            #+#    #+#             */
/*   Updated: 2023/02/24 11:18:48 by dsafin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibocall(int index, int val1, int val2)
{
	int	i;

	i = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (val2);
	if (index > 1)
	{
		i = ft_fibocall(index - 1, val2, val1 + val2);
		return (i);
	}
	else
		return (-1);
}

int	ft_fibonacci(int index)
{
	return (ft_fibocall(index, 0, 1));
}
/*
int	main()
{
	printf("%i", ft_fibonacci(10));
	return (0);
}*/
