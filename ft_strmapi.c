/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 09:29:40 by hecmarti          #+#    #+#             */
/*   Updated: 2023/08/01 09:38:57 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#include <stddef.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	len;
	size_t	i;

	if (!s || !*s)
		return NULL;

	len = 0;
	while (s[len])
		len++;

	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return NULL;

	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';

	return result;
}

char modify_char(unsigned int index, char c)
{
	return c + index;
}

int main(void)
{
	const char *original_str = "Hello";
	char *modified_str = ft_strmapi(original_str, &modify_char);

	if (modified_str)
	{
		printf("Original string: %s\n", original_str);
		printf("Modified string: %s\n", modified_str);
		free(modified_str);
	}
	else
	{
		printf("Error: Memory allocation failed.\n");
	}

	return 0;
}
