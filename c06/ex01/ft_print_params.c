/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arastepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 17:46:46 by arastepa          #+#    #+#             */
/*   Updated: 2020/12/08 20:39:14 by arastepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_print_params(int argc, char **str)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while (j < len(str[i]))
		{
			ft_putchar(str[i][j]);
			if (j == (len(str[i])) - 1)
			{
				ft_putchar('\n');
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 1)
	{
		ft_print_params(argc, argv);
	}
	return (0);
}
