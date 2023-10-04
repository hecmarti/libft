/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:58:22 by hecmarti          #+#    #+#             */
/*   Updated: 2023/10/04 15:51:59 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_memcmp(const void *rstr1, const void *rstr2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				count;

	count = 0;
	str1 = (const unsigned char *)rstr1;
	str2 = (const unsigned char *)rstr2;
	while (count < n)
	{
		if (str1[count] != str2[count])
			return ((int)(str1[count] - str2[count]));
		count++;
	}
	return (0);
}

/*int	ft_memcmp(const void *rstr1, const void *rstr2, size_t n)
{
	size_t	count;
	char	*str1;
	char	*str2;

	count = 0;
	str1 = (char *)rstr1;
	str2 = (char *)rstr2;
	while (str1[count] && str2[count] && (size_t)count <= n)
	{
		if (str1[count] > str2[count])
			return (1);
		if (str1[count] < str2[count])
			return (-1);
		if (str1[count] == str2[count])
			return (0);
	count++;
	}
	return ('NULL');
}*/
/*
int	main(void)
{
	const char	*str1;
	const char	*str2;
	size_t		n;

	str1 = "pata";
	str2 = "Pata";
	n = 0;
	printf("%d", ft_memcmp(str1, str2, n));
}
*/