/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:27:47 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/12 18:55:03 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{	
	char	caracter ;
	int		i;

	i = 0;
	while (*(str + i) != '\0')
	{
		caracter = *(str + i);
		write (1, &caracter, 1);
		i++ ;
	}
}
