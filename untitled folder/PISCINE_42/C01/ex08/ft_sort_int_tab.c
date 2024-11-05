/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohidbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:28:46 by mohidbel          #+#    #+#             */
/*   Updated: 2024/07/25 23:18:58 by mohidbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	h;
	int	i;
	int	j;

	while (size >= 1)
	{
		i = 0;
		while (i < size - 1)
		{
			j = i + 1;
			if (tab[i] > tab[j])
			{
				h = tab[i];
				tab[i] = tab[j];
				tab[j] = h;
			}
			i++;
		}
		size--;
	}
}
