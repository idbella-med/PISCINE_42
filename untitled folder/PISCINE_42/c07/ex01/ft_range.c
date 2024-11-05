/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenaam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 21:11:09 by abbenaam          #+#    #+#             */
/*   Updated: 2024/08/13 20:13:20 by abbenaam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*result;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	result = malloc(sizeof(int) * size);
	if (result == 0)
		return (NULL);
	size = min;
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
/*
int main()
{
	int	i;
	int *arr;

	i = 0;
	arr = ft_range(22, 29);
	while(i < 7)
	{
		printf("%d", arr[i]);
		i++;
	}
}*/
