/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchrM.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:09:40 by hecmarti          #+#    #+#             */
/*   Updated: 2023/07/13 09:38:41 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

void	*ft_memchr(const void *str, int c, size_t n)
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
	char *str = "Hello, world!";
	int c = 'i';
	
	void *result = ft_memchr(str, c, strlen(str));

	if (result != NULL)
		printf("El byte '%c' fue encontrado.\n", c);
	else
		printf("El byte '%c' no fue encontrado.\n", c);

	return 0;
}
