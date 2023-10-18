/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:34:49 by hecmarti          #+#    #+#             */
/*   Updated: 2023/10/18 15:01:13 by hecmarti         ###   ########.fr       */
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
