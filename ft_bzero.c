/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:33:17 by hecmarti          #+#    #+#             */
/*   Updated: 2023/08/21 10:25:59 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_bzero(void *s, size_t n)
{
	int				count;
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	count = 0;
	while (n-- > 0)
	{
		tmp[count] = 0;
		count++;
	}
}

/*
int	main(void)
{
	char	s[21] = "Cadena de caracteres";
	size_t	n;

	n = 1;
	ft_bzero(s, n);
	printf("%s", s);
}
*/