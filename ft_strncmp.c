/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:53:51 by hecmarti          #+#    #+#             */
/*   Updated: 2023/10/04 14:59:35 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			count;
	unsigned char	u1;
	unsigned char	u2;

	count = 0;
	while (count < n)
	{
		u1 = (unsigned char) str1[count];
		u2 = (unsigned char) str2[count];
		if (u1 > u2)
			return (1);
		if (u1 < u2)
			return (-1);
		if (u1 == '\0' || u2 == '\0')
			break ;
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