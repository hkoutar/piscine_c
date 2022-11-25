/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 23:55:24 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/11 11:09:03 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	myletter ;

	myletter = 'z' ;
	while (myletter >= 'a')
	{
		write (1, &myletter, 1);
		myletter-- ;
	}
}
