/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:53:51 by hecmarti          #+#    #+#             */
/*   Updated: 2023/08/21 11:48:45 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		if (str1[count] > str2[count])
			return (1);
		if (str1[count] < str2[count])
			return (-1);
	count++;
	}
	return (0);
}

/*
int	main(void)
{
	const char	*str1;
	const char	*str2;
	size_t		n;

	str1 = "Pata";
	str2 = "Pata";
	n = 3;
	printf("%d", ft_strncmp(str1, str2, n));
}
*/