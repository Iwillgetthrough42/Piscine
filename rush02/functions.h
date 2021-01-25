/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 23:25:32 by smelikya          #+#    #+#             */
/*   Updated: 2020/12/13 23:27:00 by smelikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

typedef struct	s_list
{
	unsigned int	nb;
	char			*val;
}		t_list;
unsigned int	ft_atoi(const char *str);
char			*ft_strdup(char *src);
void			ft_putstr(char *str);
char			*ft_getnumber(int fd);
char			*ft_getname(int fd, char *c);
t_list			*process(char *file);
#endif
