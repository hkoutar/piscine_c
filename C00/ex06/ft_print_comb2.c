/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 09:53:11 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/14 00:02:27 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	algorithme(int a, int b, int flag)
{
	ft_putchar (48 + a / 10);
	ft_putchar (48 + a % 10);
	ft_putchar (' ');
	ft_putchar (48 + b / 10);
	ft_putchar (48 + b % 10);
	if (flag == 0)
	{
		ft_putchar (',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	flag;

	a = 0 ;
	b = 0 ;
	flag = 0 ;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a == 98)
				flag = 1 ;
			algorithme (a, b, flag);
			b++ ;
		}
		a++ ;
	}
}
