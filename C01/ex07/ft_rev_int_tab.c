/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 11:54:39 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/12 11:57:45 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp ;

	i = 0 ;
	while (i < (size / 2))
	{
		temp = 0 ;
		temp = *(tab + size - 1 - i);
		*(size + tab - 1 - i) = *(tab + i);
		*(tab + i) = temp ;
		i++ ;
	}
}
