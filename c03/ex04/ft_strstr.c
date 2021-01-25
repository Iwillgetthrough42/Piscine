/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arastepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 14:32:36 by arastepa          #+#    #+#             */
/*   Updated: 2020/12/05 11:41:59 by arastepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	while (i <= len(str) - len(to_find))
	{
		j = 0;
		while (j < len(to_find))
		{
			if (str[i + j] != to_find[j])
			{
				break ;
			}
			j++;
		}
		if (j == len(to_find))
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
