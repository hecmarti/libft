/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:09:46 by hecmarti          #+#    #+#             */
/*   Updated: 2023/08/21 11:48:30 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		count;
	size_t	count2;

	count2 = ft_strlen((char *)src);
	count = 0;
	if (dstsize != 0)
	{
		return (count2);
	}
	while ((size_t)count <= dstsize && src)
	{
		dst[count] = src[count];
		count++;
	}
	return (count2);
}

/*
int	main(void)
{
	char		*dst;
	const char	*src;
	size_t		dstsize;

	dst = "cara";
	src = "maraca";
	dstsize = 3;
	printf("%zu\n", ft_strlcpy(dst, src, dstsize));
	printf("%s", src);
}
*/