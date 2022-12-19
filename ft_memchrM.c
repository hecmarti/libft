/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchrM.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:09:40 by hecmarti          #+#    #+#             */
/*   Updated: 2022/12/13 17:24:35 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

void	*memchr(const void *str, int c, size_t n)
{
    char	*cstr;
	size_t	i;

	i = 0;
    cstr = (char *)str;
	if (str == 0 || n == 0)
		return (NULL);
	while (cstr[i] != '\0')
	{
		if (cstr[i] == c && i <= n)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	const char	str[50] = "mitpoloipm";
	int	i = 'o';
	printf("%s", memchr(str, i, 2));
}
