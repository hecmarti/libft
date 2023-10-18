/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 09:29:40 by hecmarti          #+#    #+#             */
/*   Updated: 2023/10/18 15:00:54 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapi;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	mapi = malloc(ft_strlen(s) + 1);
	if (!mapi)
		return (NULL);
	while (s[i])
	{
		mapi[i] = f(i, s[i]);
		i++;
	}
	mapi[i] = '\0';
	return (mapi);
}

/*
int	main(void)
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
*/