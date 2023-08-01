/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:34:49 by hecmarti          #+#    #+#             */
/*   Updated: 2023/07/13 10:49:11 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start = 0;
	int		end;
	int		s1_len = ft_strlen(s1);
	char	*trimmed_str;

	while (s1[start] != '\0' && strchr(set, s1[start]) != NULL)
		start++;
	end = s1_len - 1;
	while (end >= start && strchr(set, s1[end]) != NULL)
		end--;

	trimmed_str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (trimmed_str == NULL)
		return NULL;

	for (int i = start; i <= end; i++)
		trimmed_str[i - start] = s1[i];
	trimmed_str[end - start + 1] = '\0';

	return trimmed_str;
}

int main(void)
{
	char const	*s1;
	char const	*set;

	s1 = "tekilamancotekila";
	set = "tekila";
	printf("%s\n", ft_strtrim(s1, set));

	return 0;
}
