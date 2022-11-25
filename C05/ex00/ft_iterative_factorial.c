/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:10:39 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/25 13:10:16 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	facto ;
	int	i;

	facto = 1;
	i = 2 ;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
	{
		while (i <= nb)
		{
			facto = facto * i ;
			i++ ;
		}
	}
	return (facto);
}
