/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohidbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:46:21 by mohidbel          #+#    #+#             */
/*   Updated: 2024/07/25 19:07:12 by mohidbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a[3];

	a[0] = '0';
	while (a[0] <= '7')
	{
		a[1] = a[0] + 1;
		while (a[1] <= '8')
		{
			a[2] = a[1] + 1;
			while (a[2] <= '9')
			{
				write(1, &a[0], 1);
				write(1, &a[1], 1);
				write(1, &a[2], 1);
				if (a[0] < '7')
				{
					write(1, ", ", 2);
				}
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
}
int main ()
{
	ft_print_comb();
}