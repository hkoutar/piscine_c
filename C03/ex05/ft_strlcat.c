/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 12:12:36 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/26 12:38:40 by hkoutar-         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	length_dest;
	unsigned int	length_src ;

	i = 0;
	j = 0;
	while (*(dest + j) != '\0')
		j++;
	length_dest = j;
	length_src = ft_strlen(src);
	if (size == 0 || size <= length_dest)
		return (length_src + size);
	while (*(src + i) != '\0' && i < size - length_dest -1)
	{
		*(dest + j) = *(src + i);
		i++;
		j++;
	}
	*(dest + j) = '\0';
	return (length_dest + length_src);
}
