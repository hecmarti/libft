/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:30:45 by hecmarti          #+#    #+#             */
/*   Updated: 2023/08/31 11:26:21 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s2;

	i = 0;
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s || !s2)
		return (NULL);
	while (i < len && s[start + i])
	{
		s2[i] = s[start + i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/*
int	main(void)
{
	char const		*s;
	unsigned int	start;
	size_t			len;

	s = "quiero que saques ya algo";
	start = 1;
	len = 9;
	ft_putstr_fd(ft_substr(s, start, len), 1);
	return (0);
}
*/
