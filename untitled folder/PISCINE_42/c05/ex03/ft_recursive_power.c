/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohidbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 12:00:08 by mohidbel          #+#    #+#             */
/*   Updated: 2024/08/11 01:09:35 by mohidbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power > 1)
		nb *= ft_recursive_power(nb, (power - 1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (nb);
}
