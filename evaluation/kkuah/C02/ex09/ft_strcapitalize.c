/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkuah <kkuah@student.42kl.edu.my:>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:19:53 by kkuah             #+#    #+#             */
/*   Updated: 2023/02/20 16:36:46 by kkuah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (j == 1 && str[i] >= 'a' && str[i] <= 'z')
		{	
			str[i] = str[i] - 32;
			j = 0;
		}
		else if ((j == 0) && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		else if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A'))
			j = 1;
		else if ((str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			j = 1;
		else
			j = 0;
		i++;
	}
	return (str);
}
/*
int main ()
{
	char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", s);
	ft_strcapitalize(s);
	printf("\n%s", s);
	return 0;
} */
