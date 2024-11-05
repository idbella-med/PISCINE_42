/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenaam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:55:34 by abbenaam          #+#    #+#             */
/*   Updated: 2024/08/14 02:29:17 by mohidbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	while (src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strslen(char **str, int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(str[i]);
		i++;
	}
	return (len);
}

void	ft_add_null(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		str[i++] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	int		strslen;
	int		strlen;
	int		seplen;

	i = 0;
	strslen = ft_strslen(strs, size);
	seplen = ft_strlen(sep) * (size - 1);
	strlen = seplen + strslen;
	if (size <= 0)
		return (malloc(1));
	str = (char *) malloc (strlen * sizeof(char));
	if (str == NULL)
		return (malloc(1));
	ft_add_null(str);
	while (i < size - 1)
	{
		str = ft_strcat(str, strs[i]);
		if (i != size - 1)
			str = ft_strcat(str, sep);
		i++;
	}
	return (str);
}
