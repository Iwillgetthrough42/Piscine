/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arastepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:11:21 by arastepa          #+#    #+#             */
/*   Updated: 2020/12/03 12:13:28 by arastepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		len(char *dest)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int ln;

	ln = len(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i + ln] = src[i];
		i++;
	}
	dest[i + ln] = '\0';
	return (dest);
}
