/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:51:07 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/18 15:54:37 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0 ;
	while (*(dest + i) != '\0')
		i++ ;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		j++;
		i++ ;
	}
	*(dest + i) = '\0' ;
	return (dest);
}
