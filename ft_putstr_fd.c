/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:33:57 by hecmarti          #+#    #+#             */
/*   Updated: 2023/08/21 11:47:52 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include"libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	c;

	c = ft_strlen(s);
	write (fd, s, c);
}

/*
int	main(void)
{
	char	*s;

	s = "Hola";
	ft_putstr_fd(s, 1);
}
*/