/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygoh <ygoh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:44:23 by ygoh              #+#    #+#             */
/*   Updated: 2023/02/22 12:08:42 by ygoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	last;

	i = 0;
	last = size - 1;
	while (i < last)
	{
		temp = tab[i];
		tab[i] = tab[last];
		tab[last] = temp;
		i++;
		last--;
	}
}
