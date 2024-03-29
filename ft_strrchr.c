/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:51:35 by hecmarti          #+#    #+#             */
/*   Updated: 2023/10/18 15:01:03 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	while (count >= 0)
	{
		if (str[count] == (char)c)
			return ((char *)&str[count]);
		count--;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char	*str;
	int			c;

	str = "www.gdgdopkh.";
	c = '.';
	printf("%s", strrchr(str, c));
}
*/