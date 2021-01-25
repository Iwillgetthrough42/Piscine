/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arastepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:41:21 by arastepa          #+#    #+#             */
/*   Updated: 2020/12/03 12:49:13 by arastepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len(char *dest)
{
	unsigned int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

char			*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int ln;

	ln = len(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[i + ln] = src[i];
		i++;
	}
	dest[i + ln] = '\0';
	return (dest);
}
