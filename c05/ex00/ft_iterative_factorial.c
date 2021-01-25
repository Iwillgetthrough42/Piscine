/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arastepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:29:01 by arastepa          #+#    #+#             */
/*   Updated: 2020/12/09 13:29:11 by arastepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;
	int i;

	fact = 1;
	i = 1;
	while (i <= nb)
	{
		fact *= i;
		i++;
	}
	if (nb < 0)
	{
		fact = 0;
	}
	return (fact);
}
