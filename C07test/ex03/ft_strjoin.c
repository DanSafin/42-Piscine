/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsafin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:16:18 by dsafin            #+#    #+#             */
/*   Updated: 2023/03/02 11:42:51 by dsafin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *strs)
{
	int	i;

	i = 0;
	while (strs[i])
		i++;
	return (i);
}

char	ft_strcpy(char *dest, char *strs)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (strs[i])
	{
		dest[i + j] = strs[i];
		i++;
	}
	return (*dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		l;
	int		len;
	char	*dest;

	l = -1;
	len = 0;
	if (size == 0 || strs == NULL)
	{
		dest = NULL;
		return (dest);
	}
	while (++l < size)
		len += ft_strlen(strs[l]);
	len += ft_strlen(sep) * (size - 1);
	dest = malloc(sizeof(dest) * len + 1);
	if (dest == NULL)
		return (dest);
	l = -1;
	while (++l < size)
	{
		ft_strcpy(dest, strs[l]);
		if (l < size - 1)
			ft_strcpy(dest, sep);
	}
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char *s1[3];
	char sep[] = "bruh";

	s1[0] = "test";
	s1[1] = "bye";
	s1[2] = "blud";
	printf("%s", ft_strjoin(3, s1, sep));
	return (0);
}
*/
