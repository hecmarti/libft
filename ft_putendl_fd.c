/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:04:41 by hecmarti          #+#    #+#             */
/*   Updated: 2023/08/01 10:24:02 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "libft.h"

void    ft_putendl_fd(char const *s, int fd)
{
	if (!s)
		return ;
	if (fd < 0)
		return ;
	ft_putendl_fd(s, fd);
	write(fd, "\n", 1);
}