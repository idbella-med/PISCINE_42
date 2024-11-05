/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohidbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 11:57:45 by mohidbel          #+#    #+#             */
/*   Updated: 2024/08/12 23:13:00 by mohidbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	strlee(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	sl;
	unsigned int	dl;

	j = 0;
	i = 0;
	while (dest[j] != '\0')
		j++;
	sl = strlee(src);
	dl = j;
	if (size == 0 || size <= dl)
		return (sl + size);
	while (src[i] != '\0' && i < size - dl - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dl + sl);
}
