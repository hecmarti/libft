/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:30:45 by hecmarti          #+#    #+#             */
/*   Updated: 2023/08/21 11:49:04 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	while (i < (int)len && s[start + i])
	{
		s2[i] = s[start + i];
		i++;
	}
	s2[i] = 0;
	return (s2);
}

/*
int	main(void)
{
	char const		*s;
	unsigned int	start;
	size_t			len;

	s = "quiero que saques ya algo";
	start = '1';
	len = '9';
	printf("%s\n", ft_substr(s, start, len));
}
*/