/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:04:26 by hecmarti          #+#    #+#             */
/*   Updated: 2023/10/03 17:45:14 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int	count;

	count = 0;
	if (str == NULL)
		return (NULL);
	while (str[count])
	{
		if (str[count] == c)
			return ((char *)&str[count]);
		count++;
	}
	if (c == '\0')
		return ((char *)&str[count]);
	return (NULL);
}
