/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:13:00 by hecmarti          #+#    #+#             */
/*   Updated: 2023/08/21 10:30:40 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*first;
	char	*second;

	i = 0;
	first = (char *)str1;
	second = (char *)str2;
	if (first < second)
	{
		while (n-- > 0)
			first[n] = second[n];
	}
	else
	{
		while (i < n)
		{
			first[i] = second[i];
			i++;
		}
	}
	return (first);
}

/*
int	main(void)
{
	char	dest[] = "oldstring";
	const char	src[] = "newstrang";
	size_t	n = 9; 

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, n);
	printf("After memmove dest = %s, src = %s\n", dest, src);
}
*/