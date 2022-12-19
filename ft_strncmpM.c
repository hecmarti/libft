/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:53:51 by hecmarti          #+#    #+#             */
/*   Updated: 2022/11/30 16:23:39 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int	count;

	count = 0;
	while (str1[count] && str2[count])
	{
		if (str1[count] > str2[count])
			return (1);
		if (str1[count] < str2[count])
			return (-1);
		if (str1[count] == str2[count])
			return (0);
	count++;
	}
	return (404);
}

int	main(void)
{
	const char	*str1;
	const char	*str2;
	size_t		n;

	str1 = "Pata";
	str2 = "pata";
	n = 3;
	printf("%d", ft_strncmp(str1, str2, n));
}
