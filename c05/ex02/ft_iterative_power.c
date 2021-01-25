/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arastepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:31:38 by arastepa          #+#    #+#             */
/*   Updated: 2020/12/09 14:32:12 by arastepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int same;

	same = nb;
	i = 1;
	while (i < power)
	{
		nb = same * nb;
		i++;
	}
	if (power < 0)
	{
		nb = 0;
	}
	if (power == 0)
	{
		nb = 1;
	}
	return (nb);
}
