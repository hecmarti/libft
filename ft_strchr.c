/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:04:26 by hecmarti          #+#    #+#             */
/*   Updated: 2022/12/13 16:05:16 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int	count;

	count = 0;
	if (str == 0)
		return (NULL);
	while (str[count])
	{
		if (str[count] == c)
			return ((char *)&str[count]);
		count++;
	}
	return (NULL);
}

int	main(void)
{
	const char	*str;
	int			c;

	str = "Holoa";
	c = 'o';
	printf("%s", ft_strchr(str, c));
}
