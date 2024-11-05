/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohidbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 11:48:41 by mohidbel          #+#    #+#             */
/*   Updated: 2024/08/11 03:22:40 by mohidbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = nb;
	while (power > 1)
	{
		n *= nb;
		power--;
	}
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (n);
}
