/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:40:08 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/25 13:11:22 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if ((power == 0 && nb == 0) || power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else if (power < 1)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
	return (0);
}
