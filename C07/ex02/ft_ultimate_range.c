/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:17:56 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/29 19:07:18 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*p;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	p = (int *)malloc(sizeof(int) * (max - min));
	if (!p)
		return (-1);
	while (i < (max - min))
	{
		p[i] = min + i;
		i++;
	}
	*range = p;
	return (max - min);
}
