/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arastepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:10:45 by arastepa          #+#    #+#             */
/*   Updated: 2020/12/01 16:11:07 by arastepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;
	int bool;

	bool = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32)
		{
			bool = 0;
			break ;
		}
		i++;
	}
	return (bool);
}
