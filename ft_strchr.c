/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:04:26 by hecmarti          #+#    #+#             */
/*   Updated: 2023/10/18 15:00:33 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char			*s2;
	unsigned int	index;
	unsigned char	ch;

	ch = (unsigned char)c;
	s2 = (char *) s;
	index = 0;
	while (s2[index])
	{
		if (s2[index] == ch)
			return (&s2[index]);
		index++;
	}
	if (s2[index] == ch)
		return (&s2[index]);
	return (NULL);
}
