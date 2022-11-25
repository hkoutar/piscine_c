/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:05:42 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/29 13:10:21 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*(str + length))
	{
		length++;
	}
	return (length +1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = (char *)malloc(sizeof(char) * ft_strlen(src));
	if (dest == 0)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}
