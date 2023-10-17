/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:34:49 by hecmarti          #+#    #+#             */
/*   Updated: 2023/10/17 15:49:34 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	init;
	size_t			end;

	if (!s1)
		return (ft_strdup(""));
	if (!set)
		return (ft_strdup(s1));
	init = 0;
	while (s1[init] && ft_strchr(set, s1[init]))
		init++;
	end = ft_strlen(s1);
	while (end && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, init, end - init + 1));
}
/*static size_t	trimstart(char const *set, char const	*trim)
{
	size_t	start;
	int		found;

	start = 0;
	found = 0;
	while (trim[start] && found == 0)
	{
		if (ft_strchr(set, trim[start]) == 0)
			return (start);
		start++;
	}
	return (start);
}
static size_t	trimend(char const *set, char const	*trim)
{
	size_t	length;
	size_t	end;
	int		found;

	length = ft_strlen(trim);
	end = 0;
	found = 0;
	while (end < length)
	{
		if (ft_strchr(set, trim[length - end - 1]) == 0)
			return (end);
		end++;
	}
	return (end);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	length;
	char	*s;

	if (!s1 || !set)
		return (NULL);
	length = ft_strlen(s1);
	start = trimstart(set, s1);
	end = length - trimend(set, s1);
	if (start < end)
		return (ft_substr(s1, start, end - start));
	s = malloc(1);
	s[0] = '\0';
	return (s);
}*/
/*char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		s1_len;
	char	*trimmed_str;
	int		i;

	start = 0;
	i = 0;
	s1_len = ft_strlen(s1);
	while (s1[start] != '\0' && strchr(set, s1[start]) != NULL)
		start++;
	end = s1_len - 1;
	while (end >= start && strchr(set, s1[end]) != NULL)
		end--;
	trimmed_str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (trimmed_str == NULL)
		return (NULL);
	while (i <= end)
	{
		trimmed_str[i - start] = s1[i];
		i++;
	}
	trimmed_str[end - start + 1] = '\0';
	return (trimmed_str);
}*/
/*
int	main(void)
{
	char const	*s1;
	char const	*set;

	s1 = "tekilamancotekila";
	set = "tekila";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}
*/
