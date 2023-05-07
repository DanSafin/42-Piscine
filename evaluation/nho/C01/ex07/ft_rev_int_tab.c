/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nho <nho@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:21:56 by nho               #+#    #+#             */
/*   Updated: 2023/02/23 17:43:52 by nho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	index;

	a = 12345;
	tab = &a;
	index = 0;
	while (index < size)
	{
		a = tab[index];
		tab[index] = tab[size];
		tab[size] = b;
		b++;
		size--;
	}
}
