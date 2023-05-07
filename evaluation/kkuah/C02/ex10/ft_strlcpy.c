/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkuah <kkuah@student.42kl.edu.my:>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:37:31 by kkuah             #+#    #+#             */
/*   Updated: 2023/02/22 11:12:02 by kkuah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	i = 0;
	if (size < 1)
		return (len);
	while (src[i] != '\0' && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
/*
int main()
{	
	char s1[] = "";
	char s2[] = "";
	
	printf("%s", s1);
	printf("\n%d", ft_strlcpy(s2, s1,0)); 
	printf("\n%s", s2);
	return 0;
} */
