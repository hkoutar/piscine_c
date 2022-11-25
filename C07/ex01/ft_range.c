/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:11:16 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/29 13:17:09 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<unistd.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*t;

	t = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	if (min >= max)
		return (0);
	while (min < max)
	{
		*(t + i) = min;
		min++;
		i++;
	}
	return (t);
}
