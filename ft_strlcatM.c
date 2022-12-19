/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcatM.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:16:06 by hecmarti          #+#    #+#             */
/*   Updated: 2022/12/12 19:33:17 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int     i;
	size_t	len_dst;
	size_t	len_src;
    size_t  result;

	len_src = ft_strlen((char *)src);
	len_dst = ft_strlen(dst);
    result = len_dst;
    i = 0;
    if (dstsize <= len_dst + 1)
    {
        if (dstsize == len_dst + 1)
            return (len_src + dstsize - 1);
        return (len_src + dstsize);
    }
	while (src[i] !=  '\0' && (size_t)i < dstsize)
		dst[len_dst++] = src[i++];
    dst[dstsize - 1] = '\0';
	return(len_src + result);
}

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
