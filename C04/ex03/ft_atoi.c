/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:06:26 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/19 19:09:22 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i ;
	int	signe ;
	int	number ;

	i = 0;
	signe = 1 ;
	number = 0 ;
	while (*(str + i) <= 32)
		i++;
	while (*(str + i) == 43 || *(str + i) == 45)
	{
		if (*(str + i) == 45)
			signe *= (-1);
		i++ ;
	}
	while (48 <= *(str + i) && *(str + i) <= 57)
	{
		number = (*(str + i) - '0') + (number * 10);
		i++;
	}
	return (signe * number);
}
