/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:43:47 by hecmarti          #+#    #+#             */
/*   Updated: 2023/01/31 16:10:58 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2);
{
	char	*new;
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;

	i = 0;
	if (s1 || s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	while (i < len1)
	{
		new[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = 0;
	return (new);
}

int main(void)
{
	char	b[] = "mas";
	char	a[] = "macho";

	printf("%s", ft_strjoin(b, a));
}
