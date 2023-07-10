/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstrM.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:51:11 by hecmarti          #+#    #+#             */
/*   Updated: 2023/07/10 10:20:45 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"
#include<string.h>
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	const char *haystack = "Hello, world! This is a test string.";
	const char *needle = "world";
	size_t len = 30;
	char *result = ft_strnstr(haystack, needle, len);

	if (result != NULL)
		printf("Subcadena encontrada en la posición: %ld\n", result - haystack);
	else
		printf("Subcadena no encontrada.\n");

	return 0;
}

/*
TODO
TOFIX

extensiones -chrome.
consent-o-matic 
add blocker

Usage of data structures it is a must ! asap ! 

typedef struct s_type
{
	void *ptr;
	int number;
}              t_type;

variable static it's not the same as static function !!

static size_t ft_strlen(size_t num, char *s) 
// can be called only inside same .c 

.h heder with 
*/
