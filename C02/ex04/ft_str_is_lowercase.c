/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:48:53 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/15 18:51:59 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i ;

	i = 0 ;
	while (*(str + i) != '\0')
	{
		if (!(*(str + i) <= 122 && *(str + i) >= 97))
			return (0);
		i++ ;
	}
	return (1);
}