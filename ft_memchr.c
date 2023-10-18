/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:09:40 by hecmarti          #+#    #+#             */
/*   Updated: 2023/10/18 14:59:44 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ucstr;
	size_t			i;

	ucstr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (ucstr[i] == (unsigned char)c)
			return ((void *)&ucstr[i]);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char *str = "Hello, world!";
	int c = 'i';
	
	void *result = ft_memchr(str, c, strlen(str));

	if (result != NULL)
		printf("El byte '%c' fue encontrado.\n", c);
	else
		printf("El byte '%c' no fue encontrado.\n", c);

	return (0);
}
*/