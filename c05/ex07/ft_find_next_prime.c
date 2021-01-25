/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arastepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 14:08:23 by arastepa          #+#    #+#             */
/*   Updated: 2020/12/11 17:12:56 by arastepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int t;

	t = 1;
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
		{
			t = 0;
			break ;
		}
		i++;
	}
	if (nb <= 1)
	{
		t = 0;
	}
	return (t);
}

int		ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb) && nb <= 2147483647)
	{
		nb++;
	}
	return (nb);
}
