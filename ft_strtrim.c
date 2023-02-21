/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:34:49 by hecmarti          #+#    #+#             */
/*   Updated: 2023/02/21 13:49:22 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		l1;
	int		count;
	char 	end;

	i = 0;
	count = 0;
	l1 = ft_strlen(*s1);
	count = ft_strlen(*set);
	while (s1)
		if (s1[i] == set[i])
			i++;
		if (s1[l1] == set[count])
			l1--;
			count--;
	i = i - l1;
	end = *(char *)malloc(sizeof(char) * i);
	return (end);
}

int main(void)
{
	char const	*s1;
	char const	*set;

	s1 = "tekilamancotekila";
	set = "tekila";
	printf("/n%c", *ft_strtrim(s1, set));
}
