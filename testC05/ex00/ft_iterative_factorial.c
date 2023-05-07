/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsafin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:54:56 by dsafin            #+#    #+#             */
/*   Updated: 2023/02/24 11:16:04 by dsafin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	j = nb;
	n = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		while (i < nb - 1)
		{
			j *= n -1;
			n -= 1;
			i++;
		}
	}
	return (j);
}
/*
int main()
{
	printf("%i", ft_iterative_factorial(10));
	return (0);
}*/
