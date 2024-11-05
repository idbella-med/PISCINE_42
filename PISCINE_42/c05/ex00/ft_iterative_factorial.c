/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohidbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:33:59 by mohidbel          #+#    #+#             */
/*   Updated: 2024/08/12 05:07:27 by mohidbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	while (nb > 0)
	{
		n *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (n);
}
int main()
{
	printf("%d\n",  ft_iterative_factorial(7));
}
