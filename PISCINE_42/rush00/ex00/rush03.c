/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohidbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 08:55:37 by mohidbel          #+#    #+#             */
/*   Updated: 2024/07/30 10:30:50 by mohidbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print(int x, char f, char m, char l)
{
	int	tx;

	tx = 1;
	while (tx <= x)
	{
		if (tx == 1)
			ft_putchar(f);
		else if (x == tx)
			ft_putchar(l);
		else
			ft_putchar(m);
		tx++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	ty;

	if (x >= 1 && y >= 1)
	{
		ty = 1;
		while (ty <= y)
		{
			if (ty == 1)
			{
				print(x, 'A', 'B', 'C');
			}
			else if (y == ty)
			{
				print(x, 'A', 'B', 'C');
			}
			else
			{
				print(x, 'B', ' ', 'B');
			}
			ty++;
		}
	}
}
