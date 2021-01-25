/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arastepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 15:08:08 by arastepa          #+#    #+#             */
/*   Updated: 2020/11/29 20:34:30 by arastepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

void	ft_putchar(char c);

void	ft_print(char *a, int x, int y)
{
	int		i;
	int		j;
	char	k;

	i = 1;
	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x + 1)
		{
			if (i != x + 1)
			{
				k = *((a + j * x) + i);
				ft_putchar(k);
			}
			if (i == x + 1)
			{
				ft_putchar('\n');
			}
			i++;
		}
		j++;
	}
}

int		ft_bool(int j, int i, int x, int y)
{
	return ((j == 1 && i >= 2 && i <= x - 1) ||
			(i == 1 && j >= 2 && j <= y - 1) ||
			(j == y && i >= 2 && i <= x - 1) ||
			(i == x && j >= 2 && j <= y - 1));
}

void	ft_logic(int j, int y, int x, char *a)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if ((i == 1 && j == 1) || ((i == x && j == y) && (i > 1 && j > 1)))
		{
			*((a + j * x) + i) = '/';
		}
		else if ((i == 1 && j == y) || (j == 1 && i == x))
		{
			*((a + j * x) + i) = '\\';
		}
		else if (ft_bool(j, i, x, y))
		{
			*((a + j * x) + i) = '*';
		}
		else
		{
			*((a + j * x) + i) = ' ';
		}
		i++;
	}
}

void	rush(int x, int y)
{
	char	a[y][x];
	int		i;
	int		j;

	i = 1;
	j = 1;
	while (j <= y)
	{
		ft_logic(j, y, x, &a[0][0]);
		j++;
	}
	ft_print(&a[0][0], x, y);
}
