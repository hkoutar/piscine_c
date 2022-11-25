/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:34:32 by hkoutar-          #+#    #+#             */
/*   Updated: 2022/06/25 13:37:55 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_str(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		ft_putchar(*(str + i));
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac >= 2)
	{
		while (av[ac - 1 - i] != av[0])
		{
			put_str(av[ac - 1 - i]);
			write (1, "\n", 1);
			i++;
		}
	}
	return (0);
}
