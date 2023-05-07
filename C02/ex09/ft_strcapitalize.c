/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsafin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:08:02 by dsafin            #+#    #+#             */
/*   Updated: 2023/02/16 14:45:45 by dsafin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (str[i] != '\0')
	{
		if (count == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (count == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A'))
			count = 1;
		else if ((str[i] > 'Z' && str[i] < 'a') || str[i] > 122)
			count = 1;
		else
			count = 0;
		i++;
	}
	return (str);
}
