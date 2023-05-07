/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsafin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:01:59 by dsafin            #+#    #+#             */
/*   Updated: 2023/02/23 14:31:38 by dsafin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				result;

	result = 0;
	i = 0;
	if (n == 0)
		return (result);
	while (s1[i] == s2[i] && i < n - 1 && s1[i] != '\0' && s2[i] != '\0' )
		i++;
	result = s1[i] - s2[i];
	return (result);
}
/*
int main()
{
	char s1[] = "hello world";
	char s2[] = "hello worlq";
	printf("%i", ft_strncmp(s1, s2, 11));
	return (0);
}*/
