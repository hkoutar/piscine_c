/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 23:39:12 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/13 23:51:52 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	mylongnumber ;

	if (nb < 0)
	{
		ft_putchar ('-');
		nb = nb * (-1);
	}
	mylongnumber = nb;
	if (mylongnumber >= 0 && mylongnumber <= 9)
	{
		ft_putchar(mylongnumber + 48);
	}
	else
	{
		ft_putnbr(mylongnumber / 10);
		ft_putchar((mylongnumber % 10) + 48);
	}
}
