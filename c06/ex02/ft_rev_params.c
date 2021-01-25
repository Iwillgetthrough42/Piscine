/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arastepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:04:28 by arastepa          #+#    #+#             */
/*   Updated: 2020/12/09 10:32:43 by arastepa         ###   ########.fr       */
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

void	ft_rev_params(int argc, char **str)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while (j < len(str[argc - i]))
		{
			ft_putchar(str[argc - i][j]);
			if (j == (len(str[argc - i])) - 1)
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
		ft_rev_params(argc, argv);
	}
	return (0);
}
