/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchrM.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:51:35 by hecmarti          #+#    #+#             */
/*   Updated: 2022/11/30 12:56:53 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*strrchr(const char *str, int c)
{
	int	count;
	int	state;
	int	marks;

	count = 0;
	state = 0;
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

int	main(void)
{
	const char	*str;
	int			c;

	str = "www.gdgdopkh.";
	c = '.';
	printf("%s", strrchr(str, c));
}
