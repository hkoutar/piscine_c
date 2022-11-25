/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 23:05:41 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/11 11:04:25 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	myletter ;

	myletter = 'a' ;
	while (myletter <= 'z')
	{
		write (1, &myletter, 1);
		myletter++;
	}
}
