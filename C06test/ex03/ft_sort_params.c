/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsafin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:43:40 by dsafin            #+#    #+#             */
/*   Updated: 2023/02/27 13:15:38 by dsafin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sort_params(char *str)
{
	char	temp;
	int		i;

	i = -1;
	while (str[++i])
	{
		if (str[i] > str[i + 1])
		{
			temp = str[i];
			str[i] = str[i + 1];
			str[i + 1] = temp;
		}
	}
	i = -1;
	while (str[++i])
	{
		ft_putchar(str[i]);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 2;
	while (i < argc)
	{
		ft_sort_params(argv[i]);
		i++;
	}
	return (0);
}
