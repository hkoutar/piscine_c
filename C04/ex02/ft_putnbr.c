/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:58:38 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/19 19:05:31 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	mynumber ;

	if (nb < 0)
	{
		ft_putchar('-');
		nb *= (-1);
	}
	mynumber = nb ;
	if (nb <= 9 && nb >= 0)
	{
		ft_putchar(mynumber + '0');
	}
	else
	{
		ft_putnbr(mynumber / 10);
		ft_putchar((mynumber % 10) + '0');
	}
}
