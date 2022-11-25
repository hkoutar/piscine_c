/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:38:42 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/25 13:48:33 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{	
	int	i;

	i = 0;
	while (*(str + i))
	{
		ft_putchar(*(str + i));
		i++ ;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0 ;
	while (*(s1 + i) != '\0' && *(s1 + i) == *(s2 + i))
		i++;
	return (*(s1 + i) - *(s2 + i));
}

void	ft_sorst_arg(char **av )
{
	int		i;
	int		j ;
	char	*temp;

	i = 1;
	j = 1;
	while (av[i])
	{
		j = i;
		while (av[j])
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				temp = av[i];
				av[i] = av[j];
				av[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 1)
	{
		ft_sorst_arg(av);
		while (i < ac)
		{
			ft_putstr(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
