/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:43:15 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/18 16:46:30 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0 ;
	while (*(str + length) != '\0')
		length++ ;
	return (length);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0 ;
	if (size != 0)
	{
		while (*(src + i) != '\0' && i < (size - 1))
		{
			*(dest + i) = *(src + i);
			i++;
		}
		*(dest + i) = '\0' ;
	}
	return (ft_strlen(src));
}
