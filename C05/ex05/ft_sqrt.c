/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:47:01 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/25 13:14:05 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 2;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (nb);
	else if (nb == 4)
		return (2);
	else
	{
		while (i <= (unsigned int) nb / 3)
		{
			if (i * i == (unsigned int)nb)
				return (i);
			i++;
		}
		return (0);
	}
}
