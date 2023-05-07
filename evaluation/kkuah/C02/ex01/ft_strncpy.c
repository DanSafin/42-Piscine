/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkuah <kkuah@student.42kl.edu.my:>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:27:05 by kkuah             #+#    #+#             */
/*   Updated: 2023/02/22 11:25:18 by kkuah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
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
/*
int main ()
{
char s1[] = "Blue sky";
char s2[] = "Stormy";
	char s3[] = "";
char s4[] = "winter nights are desolate";
	
	printf("%s\n", s2);
	printf("%s\n", ft_strncpy(s2, s3, 0));
	printf("%s\n", ft_strncpy(s2, s1, 8));
	printf("%s\n", ft_strncpy(s4, s1, 8)); 
	return 0;
} */
