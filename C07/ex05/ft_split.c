/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsafin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:47:43 by dsafin            #+#    #+#             */
/*   Updated: 2023/03/02 11:49:22 by dsafin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	if (c == '\0')
		return (str);
	return (NULL);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	**result;

	i = 0;
	j = 0;
	result = malloc(sizeof(result) * (ft_strlen(str) + 1));
	if (!result)
		return (NULL);
	while (str[i])
	{
		if (str[i] == *charset)
			i++;
		else
		{
			k = i;
			while (str[i] && !ft_strchr(charset, str[i]))
				i++;
			result[j] = malloc(sizeof(result) * (i - k + 1));
			if (!result[j])
				return (NULL);
			result[j] = ft_strncpy(result[j], &str[k], i - k);
			result[j][i - k] = '\0';
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	char	**words;
	char	*input = "Hello, world! This is a test.";
	char	*charset = " ,!.";
	int		i;

	words = ft_split(input, charset);
	if (!words)
	{
		printf("Error: could not allocate memory.\n");
		return (1);
	}
	i = 0;
	while (words[i])
	{
		printf("%s\n", words[i]);
		free(words[i]);
		i++;
	}
	free(words);
	return (0);
}
*/
