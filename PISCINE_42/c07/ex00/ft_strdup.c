/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenaam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 23:10:59 by abbenaam          #+#    #+#             */
/*   Updated: 2024/08/13 20:11:23 by abbenaam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;	
	char	*dest;

	len = 0;
	while (src[len])
		len++;
	dest = malloc((sizeof(char) * len) + 1);
	if (!dest)
		return (NULL);
	len = 0;
	while (src[len])
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
/*
int main()
{
	char o[] = "mache mochkeel";
	printf("%s", ft_strdup(o));
}*/
