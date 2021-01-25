/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arastepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 14:51:01 by arastepa          #+#    #+#             */
/*   Updated: 2020/12/02 17:19:50 by arastepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;
	int bool;

	bool = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A')
		{
			bool = 0;
			break ;
		}
		else if (str[i] > 'Z' && str[i] < 'a')
		{
			bool = 0;
			break ;
		}
		else if (str[i] > 'z')
		{
			bool = 0;
			break ;
		}
		i++;
	}
	return (bool);
}
