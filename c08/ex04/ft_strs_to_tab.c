/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arastepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 18:13:40 by arastepa          #+#    #+#             */
/*   Updated: 2020/12/16 12:31:46 by arastepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int							len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char						*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	i = 0;
	if (!(copy = malloc(sizeof(src) * (len(src) + 1))))
	{
		return (0);
	}
	while (i < len(src))
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct		s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;

	if (!(arr = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	i = 0;
	while (i < ac)
	{
		arr[i].size = len(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = NULL;
	arr[i].copy = NULL;
	arr[i].size = 0;
	return (arr);
}
