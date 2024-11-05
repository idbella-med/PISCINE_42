/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohidbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:57:26 by mohidbel          #+#    #+#             */
/*   Updated: 2024/08/12 02:55:43 by mohidbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{
		n *= nb * ft_recursive_factorial(nb - 1);
	}
	if (nb < 0)
		return (0);
	return (n);
}
