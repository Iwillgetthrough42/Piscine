/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arastepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:22:36 by arastepa          #+#    #+#             */
/*   Updated: 2020/12/14 15:41:05 by arastepa         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int lndest;
	unsigned int lnsrc;

	lndest = len(dest);
	lnsrc = len(src);
	if (lndest >= size - 1)
	{
		return (lnsrc + size);
	}
	i = 0;
	while (lndest + i < size - 1)
	{
		dest[i + lndest] = src[i];
		i++;
	}
	dest[i + lndest] = '\0';
	return (lndest + lnsrc);
}
