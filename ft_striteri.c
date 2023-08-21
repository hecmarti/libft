/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 09:16:49 by hecmarti          #+#    #+#             */
/*   Updated: 2023/08/01 09:25:23 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	if (s && f)
	{
		unsigned int i = 0;
		while (*s)
		{
			f(i, s);
			s++;
			i++;
		}
	}
}
