/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:16:06 by hecmarti          #+#    #+#             */
/*   Updated: 2023/10/18 15:00:43 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		dlen;

	d = dst;
	s = src;
	n = dstsize;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = dstsize - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
/*
int	main(void)
{
	char		dst[20];
	const char	*src;
	size_t		dstsize;

	dst[0] = 'C';
    dst[1] = 'A';
    dst[2] = 'R';
    dst[3] = 'A';
    dst[4] = 0;
    dst[5] = 0;
	src = "mara";
	dstsize = 9;
	printf("my size result: %zu\n", ft_strlcat(dst, src, dstsize));
    printf("my result: %s\n", dst);
    char		dst2[20];
	const char	*src2;
	size_t		dstsize2;

	dst2[0] = 'C';
    dst2[1] = 'A';
    dst2[2] = 'R';
    dst2[3] = 'A';
    dst2[4] = 0;
    dst2[5] = 0;
	src2 = "mara";
	dstsize2 = 9;
    printf("original size result: %zu\n", strlcat(dst2, src2, dstsize2));
    printf("original result: %s\n", dst2);
}
*/