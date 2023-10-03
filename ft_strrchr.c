/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:51:35 by hecmarti          #+#    #+#             */
/*   Updated: 2023/10/03 17:48:49 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int	count;
	int	state;
	int	marks;

	count = 0;
	marks = -1;
	while (str[count])
	{
		if (str[count] == c)
			marks = count;
		count++;
	}
	while (str[marks])
	{
		return ((char *)&str[marks]);
		marks++;
	}
	return ("-1");
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