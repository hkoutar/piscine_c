/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:55:28 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/18 16:02:30 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0 ;
	j = 0 ;
	while (*(dest + i) != '\0')
		i++ ;
	while (*(src + j) != '\0' && j < nb)
	{
		*(dest + i) = *(src + j);
		j++;
		i++ ;
	}
	*(dest + i) = '\0' ;
	return (dest);
}
