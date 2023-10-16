/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:30:45 by hecmarti          #+#    #+#             */
/*   Updated: 2023/10/16 14:48:37 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	length;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	if (len <= 0 || start >= length)
	{
		substr = (char *)malloc(1);
		substr[0] = '\0';
		return (substr);
	}
	if (len > length)
		len = length - start;
	substr = malloc (sizeof(*s) * (len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, &s[start], len + 1);
	return (substr);
}

/*char	*ft_substr(char const *s, unsigned int start, size_t len)
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
}*/
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
