/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 00:03:17 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/11 11:12:56 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_numbers(void)
{
	char	my_number;

	my_number = '0' ;
	while (my_number <= '9')
	{
		write(1, &my_number, 1);
		my_number++ ;
	}
}
