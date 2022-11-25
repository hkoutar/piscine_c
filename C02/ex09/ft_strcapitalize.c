/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 15:15:59 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/19 19:51:45 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i ;

	i = 0 ;
	while (*(str + i))
	{
		if (*(str + i) >= 'A' && *(str + i) <= 'Z')
		{
			*(str + i) += 32 ;
		}
		i++ ;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i ;
	int	flag;

	i = 0;
	flag = 1 ;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (flag == 1)
				str[i] -= 32 ;
			flag = 0 ;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		flag = 0;
		else
			flag = 1 ;
		i++ ;
	}
	return (str);
}
