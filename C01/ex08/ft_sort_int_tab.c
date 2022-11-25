/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:52:43 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/12 12:33:04 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp ;

	temp = *a ;
	*a = *b ;
	*b = temp ;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0 ;
	j = 0 ;
	while (i < size - 1)
	{
		j = i + 1 ;
		while (j < size)
		{
			if (*(tab + i) > *(tab + j))
				ft_swap ((tab + i), (tab + j));
			j++ ;
		}
		i++ ;
	}
}
